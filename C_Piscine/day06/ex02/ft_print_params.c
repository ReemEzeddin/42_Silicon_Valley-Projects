/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 00:12:07 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 00:12:22 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int ac, char *av[])
{
	int i;

	i = 1;
	while (--ac > 0)
	{
		ft_putstr(av[i++]);
		ft_putstr("\n");
	}
	return (0);
}
