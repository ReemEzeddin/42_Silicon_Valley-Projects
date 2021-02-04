/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:09:21 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:09:25 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				printing(const char *format, va_list *args)
{
	int32_t		bytes;
	char		*str;
	size_t		len;
	size_t		i;

	if (!format)
		return (0);
	bytes = 0;
	while (*format != '\0')
	{
		i = 0;
		while (format[i] != '\0' && format[i] != '%')
			++i;
		bytes += write(STDOUT, format, i);
		format += i;
		if (*format == '%')
		{
			if (!(str = formatter(&format, args, &len)))
				return (-1);
			bytes += write(STDOUT, str, len);
			free(str);
		}
	}
	va_end(*args);
	return (bytes);
}
