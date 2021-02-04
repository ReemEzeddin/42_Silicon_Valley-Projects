/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:05:30 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:05:38 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*dst;
	size_t	i;

	if (!(dst = malloc(ft_strnlen(src, n) + 1)))
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strndupfre(const char *src, size_t n, int free_src)
{
	char	*res;

	res = ft_strndup(src, n);
	if (free_src && src)
		free((void *)src);
	return (res);
}
