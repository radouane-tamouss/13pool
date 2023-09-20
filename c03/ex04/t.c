#include <unistd.h>
#include <stdio.h>
#include <string.h>
char  *ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if(to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			while (str[i+j] == to_find[j])
			{
				j++;
			}
			if (to_find[j] == '\0')
				return str+i;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char str[] = "hello Worlddog";
	char to_find[] = "dog";
	printf("%s\n",ft_strstr(str,to_find));
	printf("%s\n",strstr(str,to_find));
	return 0;
}
