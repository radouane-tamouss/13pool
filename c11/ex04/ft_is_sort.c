/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:48:04 by rtamouss          #+#    #+#             */
/*   Updated: 2023/10/05 10:54:48 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:22:51 by rtamouss          #+#    #+#             */
/*   Updated: 2023/10/05 10:46:21 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_tri(int a, int b)
{
	return (a - b);
}*/
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	ascending = 1;
	descending = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			descending = 0;
		else if (f(tab[i], tab[i + 1]) > 0)
			ascending = 0;
		i++;
	}
	if (ascending == 1 || descending == 1)
		return (1);
	else
		return (0);
}
/*int	main(void)
{
	int tab1[4] = {4,2,1,0};
	int tab2[7] = {1,4,5,7,9,9,9};
	int tab3[5] = {8,2,5,7,3};
	
	printf("tab 1 : %d\n",ft_is_sort(tab1,4,&ft_tri));
	printf("tab 2 : %d\n",ft_is_sort(tab2,7,&ft_tri));
	printf("tab 3 : %d\n",ft_is_sort(tab3,5,&ft_tri));
	return (0);
}*/
