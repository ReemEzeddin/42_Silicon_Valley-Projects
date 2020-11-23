/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 23:48:36 by root              #+#    #+#             */
/*   Updated: 2020/04/29 23:49:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *ptr;

	ptr = dst;
	while (len && *src)
	{
		*ptr++ = *src++;
		len--;
	}
	ft_bzero(ptr, len);
	return (dst);
}
