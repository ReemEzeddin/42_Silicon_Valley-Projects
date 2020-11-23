/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 20:01:17 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 20:01:30 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	if (x <= 0 || y <= 0)
		return ;
	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if ((i == 0 && j == 0) || (i == x - 1 && j == 0))
				ft_putchar('A');
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == y - 1))
				ft_putchar('C');
			else if (i == 0 || j == 0 || i == x - 1 || j == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
