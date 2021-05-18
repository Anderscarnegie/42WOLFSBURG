#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	source[30];
	char	delim;
	char	**array;
	int		t;

	t = 0;
	delim = ' ';
	strcpy(source, "Split by the space and print");
	array = ft_split(source, delim);
	printf("Source : %s \n", source);
	while (array[t] != NULL)
	{
		printf("String %d:   %s \n", t, array[t]);
		t++;
	}
	return (0);
}
