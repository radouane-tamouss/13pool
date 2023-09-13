/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:33:27 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/13 23:41:00 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fputchar(char i)
{
	write (1, &i, 1);
}

void	put_nbr(int nb)
{
	if (nb < 0)
	{
		fputchar('-');
		nb *= -1;
	}
	if (nb <= 10)
	{
		fputchar(nb + 48);
	}
	else
	{
		put_nbr(nb / 10);
		put_nbr(nb % 10);
	}
}

int	main(void)
{
	put_nbr(-3899);
	return (0);
}
