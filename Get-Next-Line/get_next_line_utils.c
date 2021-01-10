/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 13:27:10 by reezeddi          #+#    #+#             */
/*   Updated: 2021/01/10 14:50:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_strcat(char *line, char *buf)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (line[i])
		i++;
	j = 0;
	while (buf[j] && buf[j] != '\n')
	{
		line[i + j] = buf[j];
		j++;
	}
	line[i + j] = '\0';
}

int		ft_del(int res, char **line)
{
	if (res == -1 && *line)
	{
		free(*line);
		*line = NULL;
	}
	return (res);
}

int		get_line_len(char *line, char *buf)
{
	int len;

	len = 0;
	while (buf[len] && buf[len] != '\n')
		len++;
	if (line)
		len += ft_strlen(line);
	return (len);
}

int		ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
