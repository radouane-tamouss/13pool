/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:33:27 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/14 10:21:39 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fputchar(char i)
{
	write (1, &i, 1);
}

void	put_nbr(int nb)
{
	if (nb == -2147483648)
	{
		fputchar('-');
		put_nbr(2);
		put_nbr(147483648);
	}
	else if (nb < 0)
	{
		fputchar('-');
		nb = -nb;
	}
	else if (nb <= 10)
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
	put_nbr(-2147483648);
	return (0);
}