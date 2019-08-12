/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 18:43:48 by htynisha          #+#    #+#             */
/*   Updated: 2019/08/12 11:32:36 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_negativ(long nn)
{
	if (n < 0)
		return (1);
	return (0);
}

static int ft_count(long nn, int ng)
{
	int i;

	i = 0;
	if (ng)
	{
		i++;
		nn *= -1;
	}
	while (nn >= 10)
	{
		i++;
		nn /= 10;
	}

	return (i);
}

char	*ft_itoa(int n)
{
	long nn;
	long nn2;
	char *str;
	int ng;
	int i;

	nn = n;
	ng = 0;
	i = 0;
	if (ft_negativ(nn))
		ng = 1;
	lng2 = lng;

	while (lng2 >= 10)
	{
		i++;
		lng2 /= 10;
	}
	if (ng)
		ft_strnew(i + 1);
	else
		ft_strnew(i);

	return (str);
}
