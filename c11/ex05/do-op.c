/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:10:19 by rtamouss          #+#    #+#             */
/*   Updated: 2023/10/05 13:59:35 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <stdio.h>
#include <unistd.h>

int	op(int a, char *c, int b)
{
	int	r;

	r = 1;
	if (c[0] == '+')
		r = ft_add(a, b);
	else if (c[0] == '-')
		r = ft_sub(a, b);
	else if (c[0] == '*')
		r = ft_mul(a, b);
	else if (c[0] == '/')
		r = ft_div(a, b);
	else if (c[0] == '%')
		r = ft_mod(a, b);
	return (r);
}

void	do_op(char *n, char *c, char *m)
{
	int	i;
	int	a;
	int	b;
	int	r;

	i = 0;
	r = 1;
	a = ft_atoi(n);
	b = ft_atoi(m);
	if (!(c[0] == '+' || c[0] == '-'
			|| c[0] == '/' || c[0] == '%' || c[0] == '*'))
		write (1, "0", 1);
	else if (c[0] == '/' && b == 0)
		write (1, "Stop : division by zero", 23);
	else if (c[0] == '%' && b == 0)
		write (1, "Stop : modulo by zero", 21);
	else
	{
		r = r * (op(a, c, b));
		ft_putnbr(r);
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	return (0);
}
