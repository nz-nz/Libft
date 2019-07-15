/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 18:43:48 by htynisha          #+#    #+#             */
/*   Updated: 2019/07/11 20:34:21 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	l;
	long	lbuf;
	int		ng;
	int		i;
	char	*str;

	l = n;
	lbuf = ln;
	ng = 0;
	i = 0;
	if (l < 0)
	{
		ng = 1;
		l *= -1;
	}
	while (l)
	{
		l /= 10;
		i++;
	}
	l = lbuf;
	if (ng)
	{
		str = ft_strnew(i + 1);
		str[0] = '-';
	}
	else
		str = ft_strnew(i);
	i--;
	while (l > 0 && i >= 0)
	{
		str[i] = (char)(l % 10) + '0';
		i--;
	}
	return (str);
}
