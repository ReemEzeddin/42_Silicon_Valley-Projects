/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 20:07:43 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 20:07:57 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		validate(int **numbers, int row, int col, int value)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		if ((numbers[i][col] == value) || (numbers[row][i] == value))
			return (0);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (numbers[row - (row % 3) + i][col - (col % 3) + j] == value)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		solving(int **numbers, int value)
{
	int i;
	int x;
	int y;

	i = 1;
	x = value / 9;
	y = value % 9;
	if (value == 81)
		return (1);
	if (numbers[x][y] != 0)
		return (solving(numbers, value + 1));
	while (i < 10)
	{
		if (validate(numbers, x, y, i))
		{
			numbers[x][y] = i;
			if (solving(numbers, value + 1))
				return (1);
			else
				numbers[x][y] = 0;
		}
		i++;
	}
	return (0);
}
