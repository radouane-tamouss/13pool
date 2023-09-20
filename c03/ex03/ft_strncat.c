/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:33:44 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/20 10:16:01 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	dst_len;

	i = 0;
	dst_len = 0;
	while (dest[dst_len])
		dst_len++;
	while (src[i] && i < nb)
	{
		dest[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dest[dst_len] = '\0';
	return (dest);
}
