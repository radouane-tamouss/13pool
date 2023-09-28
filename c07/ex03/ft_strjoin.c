/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:23:39 by rtamouss          #+#    #+#             */
/*   Updated: 2023/09/27 12:06:10 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dst_len;

	i = 0;
	dst_len = 0;
	while (dest[dst_len])
		dst_len++;
	while (src[i])
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty;
	int		total_len;
	int		i;
	char	*result;

	i = 0;
	total_len = 0;
	if (size == 0)
	{
		empty = (char *)malloc(1);
		if (empty == NULL)
			return (NULL);
		empty[0] = '\0';
		return (empty);
	}	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += ft_strlen(sep);
		i++;
	}
	result = (char *)malloc(total_len + 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

/*#include <stdio.h>

int main() {
    char *strings[] = {"Hello", "World", "This", "Is", "A", "Test"};
    char *separator = ", ";

    char *concatenated = ft_strjoin(6, strings, separator);
    if (concatenated != NULL) {
        printf("%s\n", concatenated);
        free(concatenated); // Don't forget to free the memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
