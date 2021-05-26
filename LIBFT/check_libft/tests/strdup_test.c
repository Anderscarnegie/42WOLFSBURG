#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	s[50];
	char	*p1;
	char	*p2;

	strcpy(s, "Duplicating the string\n");
	printf("Source: %s\n", s);
	p1 = strdup(s);
	p2 = ft_strdup(s);
	printf("Strdup   output: %s with length %ld\n", p1, strlen(p1));
	printf("FTStrdup output: %s with length %ld\n", p2, strlen(p2));
	free(p1);
	free(p2);
	return (0);
}
