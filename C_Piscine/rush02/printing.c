/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 19:58:15 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 19:58:28 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');

	}
} 

void printing (t_dimension dimension, int *x)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (i < 5)
	{
		if (flag != 0 && x[i] == 1)
			write (1, " || ", 4);
		if (x[i] == 1)
		{
			write( 1, "[rush-0", 7);
			ft_putnbr(i);
			write( 1, "] [", 3);
			ft_putnbr(dimension.x);
			write( 1, "] [", 3);
			ft_putnbr(dimension.y);
			write( 1, "]" ,1);
			flag = 1;
		}
		i++;
	}
}
