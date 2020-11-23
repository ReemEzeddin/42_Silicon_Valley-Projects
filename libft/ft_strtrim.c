/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 18:34:17 by reezeddi          #+#    #+#             */
/*   Updated: 2020/05/04 10:28:15 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;
	char	*result;

	beg = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[beg] && ft_strchr(set, s1[beg]))
		beg++;
	end = ft_strlen(s1 + beg);
	if (end)
		while (s1[end + beg - 1] != 0
	&& ft_strchr(set, s1[end + beg - 1]) != 0)
			end--;
	result = malloc(sizeof(char) * end + 1);
	if (!result)
		return (NULL);
	result[end] = '\0';
	if (!result)
		return (NULL);
	ft_strncpy(result, s1 + beg, end);
	return (result);
}
