/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 19:04:08 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/11 19:05:54 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	count;

	if (to_find == '\0')
		return (0);
	count = 0;
	while (to_find[count] != '\0')
		count++;
	while (str != '\0')
	{
		if (ft_strncmp(str, to_find, count) == 0)
			return (str);
		str++;
	}
	return (0);
}
