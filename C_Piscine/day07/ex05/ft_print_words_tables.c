/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 00:29:47 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 00:29:59 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i] != NULL)
	{
		j = 0;
		while (tab[i][j] != '\0')
			ft_putchar(tab[i][j++]);
		ft_putchar('\n');
		i += 1;
	}
}
