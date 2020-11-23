/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 07:36:30 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 07:36:43 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list_ptr;

	if (*begin_list1)
	{
		list_ptr = *begin_list1;
		while (list_ptr->next)
			list_ptr = list_ptr->next;
		list_ptr->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
