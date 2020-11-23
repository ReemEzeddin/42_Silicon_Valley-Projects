/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 07:07:16 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 07:07:30 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*tmp;

	if (!(tmp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	tmp->data = data;
	tmp->next = NULL;
	return (tmp);
}
