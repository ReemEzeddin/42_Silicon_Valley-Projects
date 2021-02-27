/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:08:24 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:25:40 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*apply_width(t_format format, char *str)
{
	return (
		(format.flags & MINUS) ?
			ft_strappend(str, ft_padding(format.width, format.pad), 1, 1) :
			ft_strprepend(str, ft_padding(format.width, format.pad), 1, 1));
}

t_handler g_table[] =
{
	{ '%', &mod_handler },
	{ 'c', &c_handler },
	{ 'i', &i_handler },
	{ 'u', &u_handler },
	{ 'd', &d_handler },
	{ 'x', &x_handler },
	{ 'X', &xx_handler },
	{ 's', &s_handler },
	{ 'p', &p_handler },
	{ '\0', NULL }
};

char			**parse_style(const char *format, int8_t *i)
{
	char		**styles;
	char		*closing_bracket;

	styles = NULL;
	if (format[*i] == '{')
	{
		closing_bracket = ft_strchr(format, '}');
		if (closing_bracket)
		{
			format = ft_strndup(
						format + (*i) + 1,
						closing_bracket - (format + (*i) + 1));
			styles = ft_strsplit(format, ' ');
		}
		(*i) += ft_strlen(format) + 2;
		free((void *)format);
	}
	return (styles);
}

t_format		parse_format(const char *format, va_list *args)
{
	int8_t		i;
	t_format	info;

	i = 0;
	info = (t_format) {
		.flags = parse_flags(format, &i),
		.width = parse_width(format, args, &i),
		.precision = parse_precison(format, args, &i),
		.length = parse_length(format, &i),
		.specifier = parse_specifier(format, &i),
		.style = parse_style(format, &i),
		.pad = ' ',
		.format_length = i
	};
	if (info.width < 0)
	{
		info.flags |= MINUS;
		info.width = -info.width;
	}
	if (info.flags & ZERO && !(info.flags & MINUS))
		if (info.precision == -1 || ft_ischarset(info.specifier, "cf%"))
			info.pad = '0';
	return (info);
}

t_data			extract_argument(t_format format, va_list *args)
{
	t_data	arg;

	if (format.specifier == 'f' && format.length == LLL)
	{
		arg.long_double_ = va_arg(*args, long double);
	}
	else if (format.specifier == 'f' && format.length == -1)
	{
		arg.double_ = va_arg(*args, double);
	}
	else
	{
		arg.intmax_ = va_arg(*args, intmax_t);
	}
	return (arg);
}

char			*formatter(const char **format, va_list *args, size_t *len)
{
	t_data		arg;
	t_format	info;
	char		*fstr;

	fstr = NULL;
	info = parse_format((*format) + 1, args);
	if (info.specifier == -1)
		fstr = ft_strndup(*format, info.format_length + 1);
	else
	{
		if (info.specifier != '%')
			arg = extract_argument(info, args);
	}
	(*format) += info.format_length + 1;
	(*len) = (info.specifier == 'c' && arg.char_ == 0) ?
		(unsigned int)(1 + info.width - (info.width > 0)) : ft_strlen(fstr);
	return (fstr);
}
