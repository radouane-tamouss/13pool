/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:32:17 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/25 13:33:19 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	if (nb == 0)
		return (1);
	return (nb * ft_iterative_factorial(nb - 1));
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
	return (0);
}*/
