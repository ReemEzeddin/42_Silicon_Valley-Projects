/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:01:02 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:01:13 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappend(char const *s1, char const *s2, int free_s1, int free_s2)
{
	return (ft_strjoinfre(s1, s2, free_s1, free_s2));
}
