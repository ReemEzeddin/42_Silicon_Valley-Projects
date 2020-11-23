/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 00:26:07 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 00:26:21 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_contact_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 9001)))
		return (NULL);
	k = 0;
	while (k < 9001)
		str[k++] = '\0';
	k = 0;
	i = 1;
	while (--argc)
	{
		j = 0;
		while (argv[i][j])
			str[k++] = argv[i][j++];
		str[k++] = '\n';
		i += 1;
	}
	return (str);
}
