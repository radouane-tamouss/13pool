/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:15:19 by rtamouss          #+#    #+#             */
/*   Updated: 2023/10/04 23:21:25 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr(2);
		ft_putnbr(147483648);
	}
	else
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		if (nbr < 10)
		{
			nbr += 48;
			write(1, &nbr, 1);
		}
		else
		{
			ft_putnbr(nbr / 10);
			ft_putnbr(nbr % 10);
		}
	}
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		ft_putnbr(tab[i]);
		write(1, "\n", 1);
		i++;
	}
}
/*
int	main(void)
{
	int tab[7] = {32,42234,23,23,2,53,23};
	ft_foreach(tab,7,&ft_putnbr);
	return 0;
}*/
