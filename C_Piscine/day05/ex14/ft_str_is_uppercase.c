/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 19:34:08 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/11 19:34:21 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	flag;
	int	i;

	flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 'Z' || str[i] < 'A')
		{
			flag = 0;
			break ;
		}
		i++;
	}
	return (flag);
}
