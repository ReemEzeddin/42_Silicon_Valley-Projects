/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 17:02:33 by reezeddi          #+#    #+#             */
/*   Updated: 2020/11/04 12:46:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dst,
	const char *restrict src, size_t dstsize)
{
	size_t slen;
	size_t dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dstsize < dlen)
		return (slen + dstsize);
	dst += dlen;
	ft_strlcpy(dst, src, dstsize - dlen);
	return (slen + dlen);
}
