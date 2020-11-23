/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 19:23:25 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/11 19:23:45 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' ||
					str[i] > 'z') && (str[i] < '0' || str[i] > '9'))
		{
			i++;
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] = str[i] - 32;
			continue;
		}
		else if ((str[i] <= 'Z') && (str[i] >= 'A'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
