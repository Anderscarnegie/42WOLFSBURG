#include <stdio.h>
#include <string.h>
#include "libft.h"

char	f(unsigned int pos, char c)
{
	pos = ft_toupper(c);
	c = (char)(pos);
	return (c);
}

int	main(void)
{
	char	s[50];
	char	*res;

	strcpy(s, "Sample string\n");
	printf("string : %s\n", s);
	res = ft_strmapi(s, f);
	printf("Corrected string : %s\n", res);
	return (0);
}
