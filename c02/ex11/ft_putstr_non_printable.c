/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:11:02 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/23 13:09:17 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_hexa(char c)
{
	int	n;

	n = c;
	ft_putchar('\\');
	if (n / 16 < 10)
		ft_putchar(n / 16 + '0');
	else
		ft_putchar(n / 16 + 'a' - 10);
	if (n % 16 < 10)
		ft_putchar(n % 16 + '0');
	else
		ft_putchar(n % 16 + 'a' - 10);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			print_hexa(str[i]);
		i++;
	}
}
