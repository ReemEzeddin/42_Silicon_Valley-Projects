/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strprepend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:06:14 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:06:18 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strprepend(char const *s1, char const *s2, int free_s1, int free_s2)
{
	return (ft_strjoinfre(s2, s1, free_s2, free_s1));
}
