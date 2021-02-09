/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:11:29 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/08 19:43:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char			*s_handler(t_format format, t_data arg)
{
	char		*fstr;

	fstr = (arg.str_ == NULL) ?
		ft_strdup("(null)") :
		ft_strdup(arg.str_);
	if (format.precision != -1)
		if (0 <= format.precision && format.precision < (long)ft_strlen(fstr))
			fstr[format.precision] = '\0';
	format.width -= ft_strlen(fstr);
	if (format.width > 0 && format.pad == ' ')
		fstr = apply_width(format, fstr);
	return (fstr);
}
