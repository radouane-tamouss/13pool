/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:58:05 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/19 19:12:28 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dst_len;

	dst_len = 0;
	i = 0;
	while (dest[dst_len])
		dst_len++;
	while (src[i])
	{
		dest[dst_len] = src[i];
		dst_len++;
		i++;
	}
	return (dest);
}
