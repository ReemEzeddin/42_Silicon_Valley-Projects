/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 18:38:52 by reezeddi          #+#    #+#             */
/*   Updated: 2020/11/05 12:30:15 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void	*s;
	int		len;

	if (!dst && !src)
		return (NULL);
	s = ft_memchr(src, c, n);
	if (s != NULL)
	{
		len = s - src + 1;
		ft_memmove(dst, src, len);
		return (dst + len);
	}
	ft_memmove(dst, src, n);
	return (NULL);
}
