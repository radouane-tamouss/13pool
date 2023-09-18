/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:37:30 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/18 15:16:56 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (is_alpha(str[0]) == 1)
	{
		str[0] -= 32;
	}
	while (str[i])
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+')
			&& is_alpha(str[i]) == 1)
			str[i] -= 32;
		i++;
	}
	return (str);
}
