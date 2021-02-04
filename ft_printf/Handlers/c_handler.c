/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:09:39 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:26:59 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*c_handler(t_format format, t_data arg)
{
	char		*charstr;
	size_t		len;

	if (format.width)
		format.width -= 1;
	len = 1 + format.width;
	charstr = malloc(len + 1);
	if (!format.width || (format.width && format.flags & MINUS))
		charstr[0] = arg.char_;
	else
		charstr[format.width] = arg.char_;
	charstr[len] = '\0';
	if (format.width)
		(format.flags & MINUS) ?
			ft_memset(charstr + 1, format.pad, format.width) :
			ft_memset(charstr, format.pad, format.width);
	return (charstr);
}
