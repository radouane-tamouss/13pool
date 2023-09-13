/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:22:45 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/13 21:39:27 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nbr(int i)
{
	int	fd;
	int	sd;

	fd = i / 10 + '0';
	sd = i % 10 + '0';
	write (1, &fd, 1);
	write (1, &sd, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			print_nbr(i);
			write(1, " ", 1);
			print_nbr(j);
			if (i != 98 || j != 99)
				write(1, ", ", 1);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
