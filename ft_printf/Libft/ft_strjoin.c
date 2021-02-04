/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:03:28 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:03:32 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new_str;

	if (s1 || s2)
	{
		if (!s2)
			return (ft_strdup((char *)s1));
		if (!s1)
			return (ft_strdup((char *)s2));
		if (!(new_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
			return (NULL);
		return (ft_strcat(ft_strcat(new_str, s1), s2));
	}
	return (NULL);
}
