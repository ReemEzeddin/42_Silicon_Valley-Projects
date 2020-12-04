/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:57:17 by root              #+#    #+#             */
/*   Updated: 2020/12/04 13:59:41 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <string.h>

# define BUFF_SIZE 42

typedef struct		s_file_reader
{
	char	*buffer;
	char	*cur_pos;
}					t_file;

int					get_next_line(const int fd, char **line);
void				*ft_memalloc(size_t size);
void				*ft_memset(void *dst, int c, size_t n);
char				*ft_strcat(char *dst, const char *src);
char				*ft_strchr(const char *str, int c);
char				*ft_strdup(const char *str);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlen(const char *str);
char				*ft_strnew(size_t size);
void				ft_del(char *str);

#endif
