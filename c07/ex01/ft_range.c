/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:09:07 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/26 17:03:16 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		len;
	int		*tab;
	int		i;

	i = 0;
	len = max - min;
	tab = (int *)malloc(sizeof(int) * len);
	if (min >= max)
		return (NULL);
	if (tab == NULL)
		return (NULL);
	while (i < len)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

// int main()
// {
// 	int min, max;
// 	printf("enter min and max bruh hh : ");
// 	scanf("%d %d", &min, &max);

// 	int *t;
// 	t = ft_range(min,max);

// 	int i = 0;
// 	while (i < max - min)
// 	{
// 		printf("%d ",t[i]);
// 		i++;
// 	}
// 	return 0;
// }
