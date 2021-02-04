/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlstrip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:04:49 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:04:56 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strlstrip(char const *s, char *charset)
{
	int		first;
	char	*lstripped;

	if (s)
	{
		first = 0;
		while (s[first] && ft_ischarset(s[first], charset))
			++first;
		lstripped = ft_strdup(s + first);
		free((void *)s);
		return (lstripped);
	}
	return (NULL);
}
