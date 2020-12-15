/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:40:18 by reezeddi          #+#    #+#             */
/*   Updated: 2020/12/15 10:52:22 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int			get_next_line(int fd, char **line)
{
	char			*tmp;
	ssize_t			x;
	char			bf[BUFFER_SIZE + 1];
	static char		*newline[MAX_FDS];

	x = 1;
	if (!line || fd < 0 || BUFFER_SIZE <= 0 || read(fd, bf, 0) == -1)
		return (-1);
	if (newline[fd] == NULL)
		newline[fd] = ft_memalloc(1);
	while (!ft_strchr(newline[fd], '\n') && (x = read(fd, bf, BUFFER_SIZE)) > 0)
	{
		bf[x] = '\0';
		tmp = ft_strjoin(newline[fd], bf);
		ft_del(newline[fd]);
		newline[fd] = tmp;
	}
	return (get_result(x, &newline[fd], &tmp, line));
}

int			get_result(ssize_t x, char **newline, char **tmp, char **line)
{
	int size;

	size = 0;
	if (x == 0)
		*line = ft_strdup(*newline);
	else if (x > 0)
		*line = ft_substr(*newline, 0, (ft_strchr(*newline, '\n') - *newline));
	else
		return (-1);
	size = ft_strlen(*line);
	if (x > 0)
		size++;
	*tmp = ft_strdup(*newline + size);
	ft_del(*newline);
	*newline = *tmp;
	if (x == 0)
		return (0 * ft_del(*newline));
	return (1);
}

size_t		ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	if (s)
		while (s[i])
			++i;
	return (i);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL || !(ptr = (char *)malloc(ft_strlen(s1)
		+ ft_strlen(s2) + 1)))
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int			ft_del(char *ptr)
{
	if (*ptr)
	{
		free(ptr);
		ptr = NULL;
		return (1);
	}
	return (0);
}
