/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 07:23:36 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 07:23:50 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*new_start;
	t_list	*tmp;

	new_start = NULL;
	while (*begin_list)
	{
		tmp = (*begin_list)->next;
		(*begin_list)->next = new_start;
		new_start = *begin_list;
		*begin_list = tmp;
	}
	*begin_list = new_start;
}
