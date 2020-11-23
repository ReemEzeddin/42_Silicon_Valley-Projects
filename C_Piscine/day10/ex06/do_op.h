/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 06:46:30 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 06:46:45 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

typedef struct	s_opp
{
	char	*op;
	int		(*opft)(int, int);
}				t_opp;

int				ft_sub(int a, int b);
int				ft_add(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_usage(int a, int b);

int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(char *str);

int				ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);

#endif
