/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 06:30:10 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 06:30:27 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <stdlib.h>

# define EVEN_MSG 	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define SUCCESS	0

# define TRUE		1
# define FALSE		0

# define EVEN(x)	(!((x) % 2))

typedef int			t_bool;

#endif
