/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:33:10 by rtamouss          #+#    #+#             */
/*   Updated: 2023/10/04 21:48:31 by rtamouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] && ft_is_sep(str[i], charset))
		i++;
	while (str[i])
	{
		if (!ft_is_sep(str[i], charset))
		{
			if (ft_is_sep(str[i + 1], charset) || str[i + 1] == '\0')
				count++;
		}
		i++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_extract_word(char *str, int *start_index, char *charset, int j)
{
	int		start;
	int		end;
	int		word_len;
	char	*word;
	int		i;

	i = 0;
	j = *start_index;
	while (str[j] && ft_is_sep(str[j], charset))
		j++;
	start = j;
	while (str[j] && !ft_is_sep(str[j], charset))
		j++;
	end = j - 1;
	word_len = end - start + 1;
	word = (char *)malloc((word_len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	i--;
	while (i++ < word_len)
		word[i] = str[start + i];
	word[word_len] = '\0';
	*start_index = j;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		wc;
	char	**tab1;
	int		i;
	int		j;
	int		start_index;

	wc = ft_word_count(str, charset);
	tab1 = (char **)malloc((wc + 1) * sizeof(char *));
	if (tab1 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i++ < wc)
		tab1[i] = NULL;
	i = 0;
	start_index = 0;
	while (i < wc)
	{
		tab1[i] = ft_extract_word(str, &start_index, charset, j);
		if (tab1[i] == NULL)
			return (NULL);
		i++;
	}
	tab1[i] = NULL;
	return (tab1);
}
/*
int	main(int argc, char **argv)
{
	char	*str;
	char	*charset;
	char	**result;

	if (argc != 3)
	{
		printf("Usage : %s <string> <charset> \n", argv[0]);
		return (1);
	}
	str = argv[1];
	charset = argv[2];
	result = ft_split(str, charset);
	if (result == NULL)
	{
		printf("Memory allocation error\n");
		return (1);
	}
	for (int i = 0; result[i] != NULL; i++)
	{
		printf("Word %d: %s\n", i + 1, result[i]);
		free(result[i]);
	}
	free(result);
	return (0);
}*/
