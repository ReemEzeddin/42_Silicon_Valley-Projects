/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:06:53 by reezeddi          #+#    #+#             */
/*   Updated: 2021/02/03 20:07:00 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa_base(uintmax_t n, char *base, int precision)
{
	unsigned short	intbase;
	unsigned short	col;
	char			*buf;

	if (!valid_base(base))
		return (NULL);
	col = ft_uintmaxlen_base(n, ft_strlen(base));
	precision = (precision - col > 0) ? precision - col : 0;
	col += precision;
	if (!(buf = malloc(col + 1)))
		return (NULL);
	buf = ft_memset(buf, '0', col);
	buf[col] = '\0';
	intbase = ft_strlen(base);
	while (col - precision > 0)
	{
		buf[--col] = base[n % intbase];
		n /= intbase;
	}
	return (buf);
}
