/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:34:49 by rtamouss          #+#    #+#             */
/*   Updated: 2023/10/05 14:43:45 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(char **tab1, char **tab2)
{
	char	*temp;

	temp = *tab1;
	*tab1 = *tab2;
	*tab2 = temp;
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

void	ft_sort_string_tab(char **tab)
{
	int	j;
	int	i;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j + 1] && ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
/*
int             main(void)
{
        int             index;
        char    *tab[7];

        
        tab[0] = "abc";
        tab[1] = "2s";
        tab[2] = "zz3";
        tab[3] = "5l";
        tab[4] = "9";
        tab[5] = "2";
        tab[6] = 0;
        index = 0;
        while (tab[index])
        {
                printf("tab[%d]  $%s$\n", index,  tab[index]);
                index++;
        }
        ft_sort_string_tab(tab);
        printf("\n");
        index = 0;
        while (tab[index])
        {
                printf("tab[%d] $%s$ \n", index,  tab[index]);
                index++;
        }
}*/
