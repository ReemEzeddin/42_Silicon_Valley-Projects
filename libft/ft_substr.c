/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 14:11:04 by root              #+#    #+#             */
/*   Updated: 2020/05/02 05:58:41 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = malloc(sizeof(char) * (len + 1));
	if (!sub || !s)
		return (NULL);
	if (start >= ft_strlen(s))
		ft_bzero(sub, len + 1);
	else
	{
		sub[len] = '\0';
		while (len-- > 0)
			sub[len] = s[len + start];
	}
	return (sub);
}
