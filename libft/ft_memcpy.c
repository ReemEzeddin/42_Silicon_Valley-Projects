/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 18:11:19 by reezeddi          #+#    #+#             */
/*   Updated: 2020/05/04 09:37:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest,
	const void *restrict src, size_t n)
{
	char	*dest2;
	char	*src2;

	if (!dest && !src)
		return (NULL);
	dest2 = (char *)dest;
	src2 = (char *)src;
	while (n-- > 0)
		*dest2++ = *src2++;
	return (dest);
}
