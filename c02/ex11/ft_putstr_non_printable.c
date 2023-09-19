/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:11:02 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/19 11:55:17 by rtamouss         ###   ########.fr       */
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
	int	i;

	n = c;
	i = 0;
	ft_putchar('\\');
	if (n / 16 < 10)
		ft_putchar(n / 16 + 48);
	else
		ft_putchar(n / 16 + 87);
	if (n % 16 < 10)
		ft_putchar(n % 16 + 48);
	else
		ft_putchar(n % 16 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] < 127)
			write (1, &str[i], 1);
		else
			print_hexa(str[i]);
		i++;
	}
}
