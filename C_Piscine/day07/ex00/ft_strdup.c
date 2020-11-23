/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 00:22:20 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 00:22:36 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*c;
	int		count;

	count = 0;
	while (src[count] != '\0')
		count++;
	c = (char*)malloc((count + 1));
	if (!src)
		return (0);
	if (!c)
		return (0);
	count = 0;
	while (src[count] != '\0')
	{
		c[count] = src[count];
		count++;
	}
	c[count] = '\0';
	return (c);
}
