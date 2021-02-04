/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intmaxlen_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:58:36 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 19:58:40 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intmaxlen_base(intmax_t n, unsigned int base)
{
	intmax_t	num;
	size_t		length;

	length = 1;
	num = (n < 0) ? -n : n;
	while (num >= base)
	{
		num /= base;
		++length;
	}
	return (length);
}
