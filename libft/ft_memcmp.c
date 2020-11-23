/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 20:39:44 by reezeddi          #+#    #+#             */
/*   Updated: 2020/05/01 07:01:58 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s22;

	if (n == 0)
		return (0);
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while (--n > 0 && *s11 == *s22)
	{
		s11++;
		s22++;
	}
	return ((*s11) - (*s22));
}
