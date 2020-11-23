/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 05:38:04 by reezeddi          #+#    #+#             */
/*   Updated: 2020/05/30 09:02:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp;

	if (!lst || !(tmp = ft_lstnew(f(lst->content))))
		return (NULL);
	new_lst = tmp;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp = ft_lstnew(f(lst->content))))
			return (NULL);
		ft_lstadd_back(&new_lst, tmp);
		tmp = tmp->next;
		if (tmp)
			ft_lstdelone(tmp, del);
	}
	return (new_lst);
}
