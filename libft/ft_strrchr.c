/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 17:52:18 by reezeddi          #+#    #+#             */
/*   Updated: 2020/04/17 23:21:58 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == c)
			last = (char *)s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (last);
}
