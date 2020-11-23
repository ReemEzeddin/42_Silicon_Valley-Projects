/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 23:14:38 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/17 23:15:40 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				dst_len;
	int				src_len;
	int				bytes_left;
	unsigned int	i;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	bytes_left = (int)size - 1;
	if (bytes_left >= 0)
	{
		i = 0;
		while (bytes_left-- && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (src_len);
	}
	return (src_len + size);
}
