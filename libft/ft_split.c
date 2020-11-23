/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 00:21:38 by root              #+#    #+#             */
/*   Updated: 2020/11/09 16:56:10 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	count;
	size_t	index;
	int		pos;

	if (!s)
		return (NULL);
	count = ft_countwords(s, c);
	if (!(arr = (char **)malloc((count + 1) * sizeof(char *))))
		return (NULL);
	arr[count] = NULL;
	index = 0;
	pos = 0;
	while (count-- > 0)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			index = ft_strslen(s, c);
			arr[pos++] = ft_substr(s, 0, index);
			s += index;
		}
	}
	return (arr);
}
