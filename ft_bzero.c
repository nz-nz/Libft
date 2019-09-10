/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:54:41 by htynisha          #+#    #+#             */
/*   Updated: 2019/09/10 19:07:06 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	if (n > 0)
	{
		s = (void *)malloc(n);
		while (i < n)
		{
			s[i] = 0;
			i++;
		}
	}
}