/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:17:45 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/24 20:50:13 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int	ft_is_base_alphanum(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if ((base[i] >= 'a' && base[i] <= 'z')
			|| (base[i] >= 'A' && base[i] <= 'Z')
			|| (base[i] >= '0' && base[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_is_duplicated(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] != base[j])
				j++;
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int	ft_putnbr_base_verif(char *base)
{
	if (ft_strlen(base) < 2 || ft_strlen(base) == 0)
		return (0);
	if (ft_is_duplicated(base) == 1)
		return (0);
	if (ft_is_base_alphanum(base) == 0)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	nb = nbr;
	if (ft_putnbr_base_verif(base) == 0)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb < ft_strlen(base))
	{
		write(1, &base[nb], 1);
	}
	else
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putnbr_base((nb % ft_strlen(base)), base);
	}
}
