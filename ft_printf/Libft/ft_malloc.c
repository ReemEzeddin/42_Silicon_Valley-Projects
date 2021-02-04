/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:59:58 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:00:04 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_malloc(size_t size, char c)
{
	void	*buf;
	size_t	i;

	buf = (void *)malloc(size);
	if (!buf)
		return (NULL);
	i = 0;
	while (size > i)
		((char *)buf)[i++] = c;
	return (buf);
}
