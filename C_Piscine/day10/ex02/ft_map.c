/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 06:40:25 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 06:40:43 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f) (int))
{
	int	i;
	int	*result;

	i = 0;
	result = (int*)malloc(sizeof(int) * length + 1);
	if (!result)
		return (0);
	while (i < length)
	{
		result[i] = (*f)(tap[i]);
		i++;
	}
	return (result);
}
