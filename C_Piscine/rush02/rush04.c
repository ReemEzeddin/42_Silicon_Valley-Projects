/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 20:02:20 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 20:02:37 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	j = 0;
	while (++j <= y)
	{
		i = 0;
		while (++i <= x)
		{
			if (i == 1 && j == 1)
				ft_putchar('A');
			else if ((i == 1 && j == y) || (j == 1 && i == x))
				ft_putchar('C');
			else if (i == x && j == y)
				ft_putchar('A');
			else if (i == 1 || j == 1 || i == x || j == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
