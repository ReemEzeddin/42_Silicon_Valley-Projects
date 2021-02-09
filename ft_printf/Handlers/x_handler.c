/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:12:14 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/08 19:41:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char			*x_handler(t_format format, t_data arg)
{
	intmax_t	temp;
	char		*intstr;

	if (format.length < L && format.length != -1)
		temp = (format.length == HH) ? arg.uchar_ : arg.ushort_;
	else
		temp = (format.length == -1) ? arg.uint_ : arg.uintmax_;
	intstr = ft_strdup("");
	if (!(format.precision == 0 && temp == 0))
	{
		temp = (temp < 0) ? ~(-temp) + 1 : temp;
		intstr = ft_strjoinfre(
			intstr, ft_utoa_base(temp, HEX_LOWER_BASE, format.precision), 1, 1);
		format.width -= ft_strlen(intstr) +
			((format.flags & HASH && temp) ? 2 : 0);
	}
	if (format.width && format.pad == '0')
		intstr = apply_width(format, intstr);
	if (format.flags & HASH && temp)
		intstr = ft_strprepend(intstr, "0x", 1, 0);
	if (format.width && format.pad != '0')
		intstr = apply_width(format, intstr);
	return (intstr);
}
