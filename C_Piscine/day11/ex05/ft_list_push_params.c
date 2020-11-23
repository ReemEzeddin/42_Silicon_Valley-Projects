/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 07:18:16 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 07:18:34 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	t_list	*tmp;

	i = 0;
	tmp = NULL;
	list = NULL;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = tmp;
		tmp = list;
		i += 1;
	}
	return (list);
}
