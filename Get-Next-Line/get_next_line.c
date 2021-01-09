/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 13:26:47 by reezeddi          #+#    #+#             */
/*   Updated: 2020/12/24 13:34:36 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	char			*tmp;
	ssize_t			x;
	char			bf[BUFFER_SIZE + (x = 1)];
	static char		*newline = NULL;

	if (!line || fd < 0 || BUFFER_SIZE <= 0)
		return (-1);
	newline == NULL ? newline = ft_memalloc(1) : NULL;
	while (!ft_strchr(newline, '\n') && (x = read(fd, bf, BUFFER_SIZE)) > 0)
	{
		bf[x] = '\0';
		tmp = ft_strjoin(newline, bf);
		ft_del(newline);
		newline = tmp;
	}
	if (x == 0)
		*line = ft_strdup(newline);
	else if (x > 0)
		*line = ft_substr(newline, 0, (ft_strchr(newline, '\n') - newline));
	else
		return (-1);
	tmp = ft_strdup(newline + (ft_strlen(*line) + ((x > 0) ? +1 : +0)));
	ft_del(newline);
	newline = tmp;
	return (x == 0 ? 0 * ft_del(newline) : 1);
}

char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;

	i = 0;
	while (src[i])
		i++;
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return (NULL);
	return (char *)s;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size;
	int		len1;
	int		len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	size = len1 + len2;
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	len2++;
	while (len2-- > 0)
		str[size--] = s2[len2];
	while (len1-- > 0)
		str[size--] = s1[len1];
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = malloc(sizeof(char) * (len + 1));
	if (!sub || !s)
		return (NULL);
	if (start >= ft_strlen(s))
		ft_memset(sub, 0, len + 1);
	else
	{
		sub[len] = '\0';
		while (len-- > 0)
			sub[len] = s[len + start];
	}
	return (sub);
}
