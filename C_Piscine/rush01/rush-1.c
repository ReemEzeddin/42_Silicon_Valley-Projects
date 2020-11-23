/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 20:06:52 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 20:07:22 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		solving(int **numbers, int val);

void	ft_putchar(char c);

int		ft_strlen(char *str);

void	printing(int **numbers);

int		**read_numbers(char **argv);

int		main(int argc, char **argv)
{
	int **numbers;

	if (argc == 10)
	{
		numbers = read_numbers(&argv[1]);
		if (!numbers)
			write(1, "Error\n", 6);
		else if (solving(numbers, 0))
			printing(numbers);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}

int		**read_numbers(char **argv)
{
	int row;
	int col;
	int count;
	int **numbers;

	row = 0;
	count = 0;
	numbers = (int **)malloc(sizeof(int *) * 9 + 1);
	while (row < 9)
	{
		if (ft_strlen(argv[row]) != 9)
			return (0);
		numbers[row] = (int *)malloc(sizeof(int) * 9 + 1);
		col = 0;
		while (col < 9)
		{
			if (argv[row][col] == '.')
				numbers[row][col] = 0;
			else if (argv[row][col] >= '1' && argv[row][col] <= '9')
			{
				numbers[row][col] = argv[row][col] - '0';
				count++;
			}
			else
				return (0);
			col++;
		}
		row++;
	}
	if (!(count < 17))
		return (numbers);
	else
	{
		write(1,"it has more than one solution",29);
		return(0);
	}
}

void	printing(int **numbers)
{
	int row;
	int col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			ft_putchar(numbers[row][col] + '0');
			if (col != 8)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
