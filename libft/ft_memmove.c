/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 16:09:36 by root              #+#    #+#             */
/*   Updated: 2020/05/04 09:46:44 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t count)
{
	char	*dst2;
	char	*src2;

	if (!dst && !src)
		return (NULL);
	src2 = (char *)src;
	dst2 = (char *)dst;
	if (src < dst)
	{
		src2 = src2 + count - 1;
		dst2 = dst2 + count - 1;
		while (count-- > 0)
			*dst2-- = *src2--;
	}
	else
		while (count-- > 0)
			*dst2++ = *src2++;
	return (dst);
}
