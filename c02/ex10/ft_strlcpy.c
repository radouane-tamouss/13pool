/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:24:34 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/19 22:06:23 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	while (src[i] != '\0' && i < size - 1)
	{
			dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';
	return (len);
}

int main()
{
	char src[] = "";

	char dest[10];

	unsigned int len = ft_strlcpy(dest, src, sizeof(dest));

	printf("%u", len);
}
