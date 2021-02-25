/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:55:52 by root              #+#    #+#             */
/*   Updated: 2021/02/24 21:21:51 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count_length(int i, char const *s, char c)
{
	int		lengthword;

	lengthword = i;
	while (s[lengthword] != c && s[lengthword] != '\0')
		lengthword++;
	lengthword = lengthword - i;
	return (lengthword);
}

static int		ft_countwords(char const *s, char c)
{
	int	i;
	int	nbwords;

	i = 0;
	nbwords = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			nbwords++;
		}
	}
	return (nbwords);
}

static	char	**do_split(int i, const char *s, char c, char **str)
{
	int		lengthword;
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			lengthword = count_length(i, s, c);
			str[j] = (char*)malloc((lengthword + 1) * sizeof(char));
			while (lengthword-- > 0)
			{
				str[j][k++] = s[i++];
			}
			str[j++][k] = '\0';
			k = 0;
			lengthword = 0;
		}
	}
	str[j] = NULL;
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**str;
	int		nbwords;
	char	*str2;

	i = 0;
	if (c && s)
	{
		nbwords = ft_countwords(s, c);
		str = (char**)malloc((nbwords + 1) * sizeof(char *));
		if (str == 0)
			return (0);
		str = do_split(i, s, c, str);
		return (str);
	}
	else
	{
		str2 = malloc(1);
		return ((char **)str2);
	}
}
