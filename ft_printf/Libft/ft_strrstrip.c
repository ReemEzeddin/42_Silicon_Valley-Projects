/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrstrip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:18:26 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:18:31 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrstrip(char const *s, char *charset)
{
	int		last;
	char	*rstripped;

	if (s)
	{
		last = ft_strlen(s) - 1;
		while (last >= 0 && ft_ischarset(s[last], charset))
			--last;
		rstripped = ft_strndup(s, last + 1);
		free((void *)s);
		return (rstripped);
	}
	return (NULL);
}
