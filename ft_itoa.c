/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 18:43:48 by htynisha          #+#    #+#             */
/*   Updated: 2019/08/13 19:47:28 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_negativ(long nn)
{
	if (nn < 0)
		return (1);
	return (0);
}

static int	ft_count(long nn, int ng)
{
	int		i;

	i = 0;
	if (ng)
	{
		nn *= -1;
	}
	while (nn > 0)
	{
		i++;
		nn /= 10;
	}
	return (i);
}

static char	*ft_fill_ng(char *str, int i, long nn)
{
	nn *= -1;
	while (i > 1)
	{
		i--;
		str[i] = (char)(nn % 10) + '0';
		nn /= 10;
	}
	return (str);
}

static char	*ft_fill_pos(char *str, int i, long nn)
{
	while (i > 0)
	{
		i--;
		str[i] = (char)(nn % 10) + '0';
		nn /= 10;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	long	nn;
	char	*str;
	int		ng;
	int		i;

	nn = n;
	ng = 0;
	i = 0;
	if (ft_negativ(nn))
		ng = 1;
	i = ft_count(nn, ng);
	if (ng)
	{
		i++;
		str = ft_strnew(i);
		str[0] = '-';
		return (ft_fill_ng(str, i, nn));
	}
	else
	{
		str = ft_strnew(i);
		return (ft_fill_pos(str, i, nn));
	}
}
