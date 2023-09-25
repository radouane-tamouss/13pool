/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:32:48 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/25 13:44:57 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	r = 1;
	i = 1;
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		r *= i;
		i++;
	}
	return (r);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}*/
