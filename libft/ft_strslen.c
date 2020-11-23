/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strslen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 00:14:25 by reezeddi          #+#    #+#             */
/*   Updated: 2020/11/05 11:39:51 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strslen(const char *s, char c)
{
	int	index;

	if (!*s)
		return (0);
	index = 0;
	while (*s && *s != c)
	{
		index++;
		s++;
	}
	return (index);
}
