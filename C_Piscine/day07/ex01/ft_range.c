/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 00:23:14 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 00:23:32 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	counter;
	int	*result;

	i = min;
	counter = 0;
	if (min >= max)
		return (0);
	while (i < max)
	{
		counter++;
		i++;
	}
	result = (int*)malloc(counter * 4);
	if (!result)
		return (0);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
