/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfre.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:03:52 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:03:56 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfre(char const *s1, char const *s2, int free_s1, int free_s2)
{
	char *new_str;

	new_str = ft_strjoin(s1, s2);
	if (free_s1 && s1)
		free((void *)s1);
	if (free_s2 && s2)
		free((void *)s2);
	return (new_str);
}
