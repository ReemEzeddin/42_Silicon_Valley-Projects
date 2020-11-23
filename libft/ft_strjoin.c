/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 16:14:01 by reezeddi          #+#    #+#             */
/*   Updated: 2020/05/07 02:09:47 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size;
	int		len1;
	int		len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	size = len1 + len2;
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	len2++;
	while (len2-- > 0)
		str[size--] = s2[len2];
	while (len1-- > 0)
		str[size--] = s1[len1];
	return (str);
}
