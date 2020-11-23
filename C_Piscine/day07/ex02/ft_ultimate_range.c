/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 00:25:07 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 00:25:19 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (max > min)
	{
		*range = (int *)malloc(sizeof(int) * (max - min) + 1);
		if (*range[i])
		{
			while (min < max)
				*range[i++] = min++;
		}
		return (i);
	}
	return (0);
}
