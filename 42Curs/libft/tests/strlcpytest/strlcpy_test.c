#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);

int	main(void)
{
	char	d[10];
	char	s[50];

	strcpy(s, "Copying specific count");
	strcpy(d, "---------");
	printf("Before   copy() source: %s\n", s);
	printf("Before   copy() destination: %s\n", d);
	strlcpy(d, s, 10);
	printf("After    strlcpy() destination: %s\n", d);
	printf("Return value: %ld\n", strlcpy(d, s, 10));
	strcpy(s, "Copying specific count");
	strcpy(d, "---------");
	printf("Before   copy() destination: %s\n", d);
	ft_strlcpy(d, s, 10);
	printf("After ft_strlcpy() destination: %s\n", d);
	printf("Return value: %ld\n", ft_strlcpy(d, s, 10));
	return (0);
}
