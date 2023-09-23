/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:54:29 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/23 18:24:46 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *c)
{
	unsigned int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dstlen;
	unsigned int	srclen;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (dstlen >= size)
		return (srclen + size);
	while (src[i] && i < size - dstlen - 1)
	{
		dest[dstlen + i] = src[i];
		i++;
	}
	dest[dstlen + i] = '\0';
	return (dstlen + srclen);
}
