/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:11:35 by root              #+#    #+#             */
/*   Updated: 2021/02/26 18:11:41 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_padding(int size, char c)
{
	char	*buf;
	int		i;

	buf = NULL;
	if (size > 0)
	{
		buf = malloc(size + 1);
		if (!buf)
			return (NULL);
		i = 0;
		while (size > i)
			buf[i++] = c;
		buf[i++] = '\0';
	}
	return (buf);
}
