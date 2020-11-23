/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 06:58:00 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 06:58:14 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		sorted;
	char	*tmp;

	sorted = 0;
	while (!sorted)
	{
		i = 0;
		sorted = 1;
		while (tab[i + 1])
		{
			if ((*cmp)(tab[i], tab[i + 1] > 0))
			{
				sorted = 0;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i += 1;
		}
	}
}
