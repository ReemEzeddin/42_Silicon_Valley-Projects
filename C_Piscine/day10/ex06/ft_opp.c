/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 06:47:19 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 06:47:34 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sub(int a, int b)
{
	return (a - b);
}

int		ft_add(int a, int b)
{
	return (a + b);
}

int		ft_mul(int a, int b)
{
	return (a * b);
}

int		ft_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

int		ft_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
