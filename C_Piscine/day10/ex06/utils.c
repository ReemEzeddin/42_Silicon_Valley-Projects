/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 06:50:53 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 06:51:08 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		ft_atoi(char *str)
{
	int sign;
	int result;
	int i;

	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] >= '\a' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if ((str[i] == '+' || str[i] == '-') &&
		(str[i + 1] >= '0' && str[i + 1] <= '9'))
		if (str[i++] == '-')
			sign = -1;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
		result = (result * 10) + (str[i++] - '0');
	return (sign * result);
}
