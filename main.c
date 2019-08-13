/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:28:57 by htynisha          #+#    #+#             */
/*   Updated: 2019/08/13 19:40:22 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int n;
	int m;

	n = 123456789;
	m = -59485;
	ft_putendl("Hello");
	ft_putstr("world_____");
	ft_putnbr(n);
	ft_putchar('\n');
	ft_putnbr(m);
	ft_putchar('\n');
	ft_putstr(ft_itoa(n));
	return (0);
}
