/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eouhrich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:54:32 by eouhrich          #+#    #+#             */
/*   Updated: 2023/09/30 16:41:36 by eouhrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<limits.h>

int	base_is_valide(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == 127 || str[i] <= 32)
			return (0);
		j = i + 1;
		while (str [j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i == 1)
		return (0);
	return (1);
}

int	exist_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	power(int x, int y)
{
	int	i;

	if (y == 0)
		return (1);
	i = 1;
	while (i < y)
	{
		x *= x;
		i++;
	}
	return (x);
}

long	turn_decimal(char *str, int end_index, char *base)
{
	long	r;
	int	i;
	int	j;
	int	len_base;
	len_base = 0;
	while (base[len_base] != '\0')
		len_base++;
	r = 0;
	i = 0;
	while (i < end_index)
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
				break ;
			j++;
		}
		r += j * power(len_base, end_index - 1 - i);
		i++;
	}
	return (r);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	index_start;

	if (!base_is_valide(base))
		return (0);
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	index_start = i;
	while (exist_in_base(str[i], base))
		i++;
	
	long x = (sign * turn_decimal(str + index_start, i - index_start, base));
	if (x == INT_MIN)
		return (INT_MIN);
	else
		return x;
}
#include<stdio.h>
int	main()
{
	printf("%d", ft_atoi_base("1111111111111111111111111111111" ,"01"));
}
