/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:29:56 by rtamouss          #+#    #+#             */
/*   Updated: 2023/10/05 11:36:14 by rtamouss         ###   ########.fr       */
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
