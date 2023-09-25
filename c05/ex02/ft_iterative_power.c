/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:51:41 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/25 16:50:12 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	i = 1;
	r = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (i <= power)
		{
			r *= nb;
			i++;
		}
	}
	return (r);
}
