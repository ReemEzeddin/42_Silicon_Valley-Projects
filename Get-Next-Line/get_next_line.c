/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 13:26:47 by reezeddi          #+#    #+#             */
/*   Updated: 2021/01/10 15:02:41 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static char	buf[FD_MAX][BUFFER_SIZE + 1];
	int			x;

	if (line == NULL || fd < 0 || fd >= FD_MAX || BUFFER_SIZE < 1)
		return (-1);
	*line = NULL;
	if (get_line(line, buf[fd]) == -1)
		return (ft_del(-1, line));
	while (ft_strlen(buf[fd]) == 0)
	{
		x = read(fd, buf[fd], BUFFER_SIZE);
		if (x <= 0)
			return (ft_del(x, line));
		if (get_line(line, buf[fd]) == -1)
			return (ft_del(-1, line));
	}
	next_line(buf[fd], 1);
	return (1);
}

int		get_line(char **line, char *buf)
{
	*line = (char *)realloc_line(*line, buf);
	if (*line == NULL)
		return (-1);
	ft_strcat(*line, buf);
	next_line(buf, 0);
	return (1);
}

char	*realloc_line(char *line, char *buf)
{
	char	*new_line;
	int		len;
	int		i;

	len = get_line_len(line, buf);
	new_line = (char *)malloc((len + 1) * sizeof(char));
	if (new_line == NULL)
	{
		if (line)
			free(line);
		return (NULL);
	}
	i = 0;
	while (line && line[i])
	{
		new_line[i] = line[i];
		i++;
	}
	while (i < (len + 1))
		new_line[i++] = '\0';
	if (line)
		free(line);
	return (new_line);
}

void	next_line(char buf[BUFFER_SIZE + 1], int with_new_line)
{
	ssize_t	i;
	ssize_t	j;

	i = 0;
	j = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (with_new_line)
		i++;
	while (buf[i])
		buf[j++] = buf[i++];
	while (buf[j])
		buf[j++] = '\0';
}
