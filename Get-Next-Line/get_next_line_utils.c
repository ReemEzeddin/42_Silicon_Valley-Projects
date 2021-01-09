/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 13:27:10 by reezeddi          #+#    #+#             */
/*   Updated: 2020/12/24 13:33:34 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
		((char *)str)[i++] = (unsigned char)c;
	return (str);
}

void	*ft_memalloc(size_t size)
{
	void *ptr;

	if (!(ptr = (void *)malloc(size)))
		return (NULL);
	ft_memset(ptr, 0, size);
	return (ptr);
}

int		ft_del(char *ptr)
{
	if (*ptr)
	{
		free(ptr);
		ptr = NULL;
		return (1);
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++ != '\0')
	{
		len++;
	}
	return (len);
}
