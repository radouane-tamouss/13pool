/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:37:30 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/19 17:48:47 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

void	ft_to_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

int	is_alnum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_to_lower(str);
	if (is_alpha(str[0]) == 1)
	{
		str[0] -= 32;
	}
	while (str[i])
	{
		if (!is_alnum(str[i - 1]) && is_alpha(str[i]) == 1)
			str[i] -= 32;
		i++;
	}
	return (str);
}
