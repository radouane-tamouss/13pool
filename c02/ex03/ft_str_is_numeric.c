/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:35:08 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/17 14:37:15 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	test;
	int	i;

	test = 1;
	i = 0;
	if (str[0] == '\0')
		return (test);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
		{
			test = 0;
			return (test);
		}
	}
	return (test);
}
