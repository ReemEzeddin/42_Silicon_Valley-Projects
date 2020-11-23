/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reezeddi <marvin@42.f>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 19:59:11 by reezeddi          #+#    #+#             */
/*   Updated: 2020/09/18 19:59:33 by reezeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		++count;
		++str;
	}
	return (count);
}

char *rush00 (t_dimentions dimensions)
{
	char	*out;
	int		i;
	int		j;
	int		x;
	int		y;

	x = dimensions.x;
	y = dimensions.y;
	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
	{
		if ((i == 0 && j == 0) || (i == x - 1 && j == y - 1))
			out[i] = 'o';
		else if ((i == 0 && j == y - 1) || (i == x - 1 && j == 0))
			out[i] = 'o';
		else if ((i == 0) || (i == x - 1))
			out[i] = '|';
		else if ((j == 0) || (j == y - 1))
			out = '-';
		else
			out[i] = ' ';
	}
	out [i] = '\n';
	return (out);
}

char *rush01 (t_dimentions dimensions)
{
	char	*out;
	int		i;
	int		j;
	int 	x;
	int 	y;

	x = dimensions.x;
	y = dimensions.y;
	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if ((i == 0 && j == 0) || (i == x - 1 && j == y - 1))
				out[i] = '/';
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == 0))
				out[i] = '\\';
			else if ((i == 0) || (i == x - 1))
				out[i] = '/';
			else if ((j == 0) || (j == y - 1))
				out = '*';
			else
				out[i] = ' ';
		}
		out [i] = '\n';
	}
	return (out);
}

char *rush02 (t_dimentions dimensions)
{
	char	*out;
	int		i;
	int		j;
	int 	x;
	int 	y;

	x = dimensions.x;
	y = dimensions.y;
	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if ((i == 0 && j == 0) || (i == x - 1 && j == 0))
				out[i] = 'A';
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == y - 1))
				out[i] = 'C';
			else if (i == 0 || j == 0 || i == x - 1 || j == y - 1)
				out[i] = 'B';
			else
				out[i] = ' ';
		}
	out [i] = '\n';
	}
	return (out);
}

char *rush03 (t_dimentions dimensions)
{
	char	*out;
	int		i;
	int		j;
	int 	x;
	int 	y;

	x = dimensions.x;
	y = dimensions.y;
	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == y - 1))
				out[i] = 'A';
			else if ((i == x - 1 && j == 0) || (i == x - 1 && j == y - 1))
				out[i] = 'C';
			else if ((i == 0) || (j == 0) || (i == x - 1) || (j == y - 1))
				out[i] = 'B';
			else
				out[i] = ' ';
		}
	out [i] = '\n';
	}
	return (out);
}

char *rush04 (t_dimentions dimensions)
{
	char	*out;
	int		i;
	int		j;
	int		x;
	int		y;

	x = dimensions.x;
	y = dimensions.y;
	j = -1;
	while (++j <= y)
	{
			i = -1;
		while (++i < x)
		{
			if ((i == 0 && j == 0) || (i == x - 1 && j == y - 1))
				out[i] = 'A';
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == 0))
				out[i] = 'C';
			else if ((i == 0) || (i == x - 1))
				out[i] = 'A';
			else if ((j == 0) || (j == y - 1))
				out = 'B';
			else
				out[i] = ' ';
		}
		out [i] = '\n';
	}
	return (out);
}

int *rush0(t_dimentions dimensions ,char *result)
{
	int		i;
	char	*rush_arr[5];
	int		j;
	int		x[5];
	int		length;

	i = 0;
	j = 0;
	x = -1;
	x[0] = 0;
	x[1] = 0;
	x[2] = 0;
	x[3] = 0;
	x[4] = 0;
	length = 0;
	rush_arr[0] = rush00(dimensions);
	rush_arr[1] = rush01(dimensions);
	rush_arr[2] = rush02(dimensions);
	rush_arr[3] = rush03(dimensions);
	rush_arr[4] = rush04(dimensions);
	while (i < 5)
	{
		j = 0;
		if (x != -1)
			break;
		length = ft_strlen(rush_arr[i]);
		while (j < length)
		{
			if (ft_strcmp(rsult[j] ,rush_arr[i][j]))
				break;
			if (j = length - 1)
				x[i] = 1;
			j++;
		}
		i++;
	}
	return (x);
}
