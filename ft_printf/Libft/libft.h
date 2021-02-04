/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:07:12 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:51:22 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

# include <string.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdint.h>
# include <unistd.h>
# include <stdbool.h>

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

# define	INT(c, base) (ft_strchr(base, c) - base)

# define 	ISPRINT(c) (c >= 32 && c <= 126)

# define 	STDIN  0
# define 	STDOUT 1
# define 	STDERR 2

# define 	INT_MAX 2147483647
# define 	INT_MIN -2147483648

# define 	BINARY_BASE "01"
# define 	OCTAL_BASE "01234567"
# define	DECIMAL_BASE "0123456789"
# define 	HEX_LOWER_BASE "0123456789abcdef"
# define 	HEX_UPPER_BASE "0123456789ABCDEF"

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/
typedef char*			t_bigint;

typedef union			u_double
{
	double				val;
	char				body[sizeof(double)];
}						t_dbl;

typedef union			u_long_double
{
	long double			val;
	char				body[sizeof(long double)];
}						t_ldbl;

typedef struct			s_double
{
	bool				sign;
	short				exponent;
	uintmax_t			mantissa;
	t_dbl				dbl_;
}						t_double;

typedef struct			s_long_double
{
	bool				sign;
	short				exponent;
	uintmax_t			mantissa;
	t_ldbl				ldbl_;
}						t_long_double;

typedef union			u_data
{
	char				*str_;
	bool				bool_;
	signed char			char_;
	signed short		short_;
	signed int			int_;
	signed long			long_;
	signed long long	long_long_;
	unsigned char		uchar_;
	unsigned short		ushort_;
	unsigned int		uint_;
	unsigned long		ulong_;
	unsigned long long	ulong_long_;
	double				double_;
	long double			long_double_;
	t_dbl				dbl_;
	t_ldbl				ldbl_;
	intmax_t			intmax_;
	uintmax_t			uintmax_;
	intptr_t			intptr_;
	uintptr_t			uintptr_;
	ptrdiff_t			ptrdiff_;
	size_t				size_;
}						t_data;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

void		*ft_malloc(size_t size, char c);
void		*ft_memset(void *dst, int c, size_t n);
void		*ft_memalloc(size_t size);
int			valid_base(char *base_str);
size_t		ft_intmaxlen_base(intmax_t n, unsigned int base);
size_t		ft_uintmaxlen_base(uintmax_t n, unsigned int base);
char		*ft_itoa(int n);
int			ft_atoi_base(const char *n, int base);
char		*ft_utoa_base(uintmax_t n, char *base, int precision);
size_t		ft_intlen(int n);
size_t		ft_strlen(const char *str);
char		*ft_strchr(const char *str, int c);
char		*ft_strdup(const char *str);
char		*ft_strndup(const char *src, size_t n);
char		*ft_strndupfre(const char *src, size_t n, int free_src);
char		*ft_strdup_range(const char *str, int index, int end);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoinfre(char const *s1, char const *s2,
		int free_s1, int free_s2);
char		*ft_strappend(char const *s1, char const *s2,
		int free_s1, int free_s2);
char		*ft_strprepend(char const *s1, char const *s2,
		int free_s1, int free_s2);
char		*ft_strrstrip(char const *s, char *charset);
char		*ft_strlstrip(char const *s, char *charset);
int			ft_ischarset(int c, const char *seperators);
int			ft_isdigit(int c);
int			ft_islower(int c);
int			ft_isspace(int c);
int			ft_isupper(int c);
char		*ft_strnew(size_t size);
char		*ft_strcat(char *dst, const char *src);

#endif
