/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:37:24 by reezeddi          #+#    #+#             */
/*   Updated: 2020/12/15 10:54:31 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# define BUFF_SIZE 42
# define MAX_FDS 65536

int		get_next_line(int fd, char **line);
void	*ft_memalloc(size_t size);
void	*ft_memset(void *dst, int c, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
char	*ft_strnew(size_t size);
int		ft_del(char *str);
int		get_result(ssize_t x, char **newline, char **tmp, char **line);

#endif
