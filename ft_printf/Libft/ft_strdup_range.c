/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_range.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:02:56 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:03:03 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_range(const char *str, int index, int end)
{
	int		i;
	char	*dst;

	if (!(dst = (char *)malloc(end - index + 1)))
		return (NULL);
	i = 0;
	while (index < end)
		dst[i++] = str[index++];
	dst[i] = '\0';
	return (dst);
}
