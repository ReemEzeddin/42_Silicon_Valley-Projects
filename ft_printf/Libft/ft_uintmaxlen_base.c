/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintmaxlen_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:06:36 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:06:40 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_uintmaxlen_base(uintmax_t n, unsigned int base)
{
	size_t	length;

	length = 1;
	while (n >= base)
	{
		n /= base;
		++length;
	}
	return (length);
}
