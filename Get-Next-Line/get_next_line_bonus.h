/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 13:27:54 by reezeddi          #+#    #+#             */
/*   Updated: 2021/01/10 14:51:29 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifdef BUFFER_SIZE
#  if BUFFER_SIZE < 0
#   undef BUFFER_SIZE
#   define BUFFER_SIZE 0
#  endif
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef FD_MAX
#  define FD_MAX 1024
# endif

int		get_next_line(int fd, char **line);
void	next_line(char buf[BUFFER_SIZE + 1], int should_shift_newline);
char	*realloc_line(char *line, char *buf);
int		get_line(char **line, char *buf);

int		ft_del(int res, char **line);
int		ft_strlen(const char *s);
int		get_line_len(char *line, char *buf);
void	ft_strcat(char *line, char *buf);
#endif
