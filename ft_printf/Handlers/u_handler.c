/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:11:54 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:11:59 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char			*u_handler(t_format format, t_data arg)
{
	uintmax_t	temp;
	char		*intstr;

	temp = (format.length < L && format.length != NONE) ?
		arg.uint_ :
		arg.uintmax_;
	intstr = ft_strdup("");
	if (!(format.precision == 0 && temp == 0))
	{
		intstr = ft_strjoinfre(
			intstr, ft_utoa_base(temp, DECIMAL_BASE, format.precision), 1, 1);
		format.width -= ft_strlen(intstr);
	}
	if (format.width)
		intstr = apply_width(format, intstr);
	return (intstr);
}
