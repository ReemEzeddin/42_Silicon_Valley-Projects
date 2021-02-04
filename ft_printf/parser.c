/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:09:09 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:09:13 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int8_t			parse_flags(const char *format, int8_t *i)
{
	int8_t		flags;

	flags = 0;
	while (format[*i])
	{
		if (format[*i] == '+')
			flags |= PLUS;
		else if (format[*i] == '-')
			flags |= MINUS;
		else if (format[*i] == ' ')
			flags |= SPACE;
		else if (format[*i] == '#')
			flags |= HASH;
		else if (format[*i] == '0')
			flags |= ZERO;
		else
			break ;
		++(*i);
	}
	return (flags);
}

int32_t			parse_width(const char *format, va_list *args, int8_t *i)
{
	int32_t		width;

	if (format[*i] == '*')
	{
		width = va_arg(*args, int32_t);
		++(*i);
	}
	else
	{
		width = ft_atoi(format + (*i));
		if (width)
			(*i) += ft_intlen(width);
	}
	return (width);
}

int32_t			parse_precison(const char *format, va_list *args, int8_t *i)
{
	int32_t		precision;

	if (format[*i] == '.')
	{
		++(*i);
		if (format[*i] == '*')
		{
			precision = va_arg(*args, int32_t);
			++(*i);
		}
		else
		{
			while (format[*i] == '0')
				++(*i);
			precision = ft_atoi(format + (*i));
			if (precision)
				(*i) += ft_intlen(precision);
		}
		return (precision);
	}
	return (-1);
}

int8_t			parse_length(const char *format, int8_t *i)
{
	(*i) += 2;
	if (format[(*i) - 2] == 'h' && format[(*i) - 1] == 'h')
		return (HH);
	else if (format[(*i) - 2] == 'l' && format[(*i) - 1] == 'l')
		return (LL);
	(*i) -= 1;
	if (format[(*i) - 1] == 'h')
		return (H);
	else if (format[(*i) - 1] == 'l')
		return (L);
	else if (format[(*i) - 1] == 'L')
		return (LLL);
	else if (format[(*i) - 1] == 'j')
		return (IU_MAX);
	else if (format[(*i) - 1] == 'z')
		return (SIZET);
	else if (format[(*i) - 1] == 't')
		return (PTRDIFF);
	(*i) -= 1;
	return (-1);
}

int8_t			parse_specifier(const char *format, int8_t *i)
{
	if (ft_ischarset(format[*i], SPECIFIERS))
	{
		++(*i);
		return (format[(*i) - 1]);
	}
	return (-1);
}
