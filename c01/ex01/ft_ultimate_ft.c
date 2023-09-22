/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:49:36 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/21 13:14:20 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int n;

	int *nb8 = &n;
	int **nb7 = &nb8;
	int ***nb6 = &nb7;
	int ****nb5 = &nb6;
	int *****nb4 = &nb5;
	int ******nb3 = &nb4;
	int *******nb2 = &nb3;
	int ********nb1 = &nb2;
	int *********nb = &nb1;

	ft_ultimate_ft(nb);
	printf("%d",n);
	return 0;
}
