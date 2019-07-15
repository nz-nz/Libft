/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 18:43:48 by htynisha          #+#    #+#             */
/*   Updated: 2019/07/15 20:30:12 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_negativ(long lng)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	long lng;
	long lng2;
	char *str;
	int ng;
	int i;

	lng = n;
	ng = 0;
	i = 0;
	if (ft_negativ(lng))
	{
		ng = 1;
		lng *= -1;
	}
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
