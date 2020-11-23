/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 07:12:57 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 07:13:17 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;
	list = ft_create_elem(data);
	if (list)
	{
		list->next = *begin_list;
		*begin_list = list;
	}
}
