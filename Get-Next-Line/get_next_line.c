/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:53:55 by root              #+#    #+#             */
/*   Updated: 2020/12/04 13:58:17 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_next_line(const int fd, char **line)
{
	static t_file		file[65536];
	char				tmp[BUFF_SIZE + 1];
	char				*newline;
	ssize_t				x;

	if (!line || fd < 0 || fd > 65536 || read(fd, tmp, 0) == -1)
		return (-1);
	while (!(newline = ft_strchr(file[fd].cur_pos, '\n')) &&
	(x = read(fd, tmp, BUFF_SIZE)) > 0)
	{
		tmp[x] = '\0';
		file[fd].cur_pos = ft_strjoin(file[fd].cur_pos, tmp);
		ft_del(file[fd].buffer);
		file[fd].buffer = file[fd].cur_pos;
	}
	if ((x == 0 && !file[fd].buffer) || x == -1)
		return (x);
	if (newline)
		(*newline) = '\0';
	(*line) = (file[fd].buffer) ? ft_strdup(file[fd].cur_pos) : NULL;
	if (newline && *(newline + 1) != '\0')
		file[fd].cur_pos = newline + 1;
	else
		return (0);
	return (1);
}

char		*ft_strnew(size_t size)
{
	char *buf;

	if (!(buf = ft_memalloc(size + 1)))
		return (NULL);
	return (buf);
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
	char	*new_str;

	if (s1 || s2)
	{
		if (!(new_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
			return (NULL);
		return (ft_strcat(ft_strcat(new_str, s1), s2));
	}
	return (NULL);
}

void		ft_del(char *str)
{
	if (str != NULL)
	{
		free(str);
		str = NULL;
	}
}
