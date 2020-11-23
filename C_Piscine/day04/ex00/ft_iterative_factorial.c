/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 17:35:28 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/11 17:35:50 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		factorial;
	int		i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	factorial = 1;
	i = 0;
	while (i++ < nb)
		factorial *= i;
	return (factorial);
}
