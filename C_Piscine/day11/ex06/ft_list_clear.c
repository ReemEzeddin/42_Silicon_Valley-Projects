/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 07:19:53 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 07:20:09 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*next_link;
	t_list	*link;

	link = *begin_list;
	while (link)
	{
		next_link = link->next;
		free(link);
		link = next_link;
	}
	*begin_list = NULL;
}
