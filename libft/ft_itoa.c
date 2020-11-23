/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 03:21:10 by reezeddi          #+#    #+#             */
/*   Updated: 2020/11/20 19:44:16 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char				*ptr;
	unsigned		int	num;
	size_t				size;

	if (n == 0)
		return (ft_strdup("0"));
	num = (n < 0) ? -n : n;
	size = (n < 0) ? 1 : 0;
	while (num > 0)
	{
		num = num / 10;
		size++;
	}
	if (!(ptr = ft_memalloc(sizeof(char) * size + 1)))
		return (NULL);
	num = (n < 0) ? -n : n;
	while (num > 0)
	{
		size = size - 1;
		ptr[size] = (num % 10) + '0';
		num = num / 10;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
