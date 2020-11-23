/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 18:20:25 by reezeddi          #+#    #+#             */
/*   Updated: 2020/04/21 15:05:24 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (!*little)
		return ((char *)big);
	while (big[i] != '\0' && (size_t)i < len)
	{
		if (big[i] == little[0])
		{
			j = 1;
			while (little[j] != '\0' && big[i + j] == little[j]
					&& (size_t)(i + j) < len)
				j++;
			if (little[j] == '\0')
				return ((char*)&big[i]);
		}
		i++;
	}
	return (NULL);
}
