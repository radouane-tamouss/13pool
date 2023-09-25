/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 00:17:19 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/25 09:47:08 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swapAv(char **av, int i1, int i2) {
    char *temp = av[i1];
    av[i1] = av[i2];
    av[i2] = temp;
}
void print(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac - 1)
	{
		if(ft_strcmp(av[i], av[i+1]) > 0)
		{
			swapAv(av, i, i+1);
			i = 0;
		}
		else
			i++;
	}
	print(ac, av);
	return 0;
}
