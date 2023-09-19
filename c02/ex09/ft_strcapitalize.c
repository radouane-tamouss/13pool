/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:37:30 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/19 15:41:25 by rtamouss         ###   ########.fr       */
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
		if ((str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+')
			&& is_alpha(str[i]) == 1)
			str[i] -= 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(s));
	return 0;
}
