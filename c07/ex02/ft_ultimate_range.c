/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:04:24 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/26 17:36:37 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;
	int		*arr;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == 0)
		return (0);
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (size);
}

/*int	main(void)
{
	int min, max;
	int *arr = NULL;
	int size ; 

	size = ft_ultimate_range(&arr, 2, 9);
	int i = 0 ;
	while( i < 9 - 2)
		{
			printf(":%d: ",arr[i]);
			i++;
		}
	printf("\n %d", size);
	return (0);
}*/
