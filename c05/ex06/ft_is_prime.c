/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:29:54 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/25 20:56:19 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	nbr;

	nbr = nb;
	i = 2;
	if (nbr <= 0)
		return (0);
	else if (nbr == 1)
		return (1);
	else
	{
		while (i * i <= nbr)
		{
			if (i * i == nbr)
				return (i);
			i++;
		}
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
