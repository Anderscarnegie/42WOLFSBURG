#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t destsize);

int	main(void)
{
	char	d[20];
	char	s[50];

	strcpy(s, "Concatenating specific count");
	strcpy(d, "----------");
	printf("Before   concat source: %s\n", s);
	printf("Before   concat destination: %s\n", d);
	printf("Return value: %ld\n", strlcat(d, s, 23));
	strlcat(d, s, 23);
	printf("After    strlcat() source: %s\n", s);
	printf("After    strlcat() destination: %s\n", d);
	strcpy(s, "Concatenating specific count");
	strcpy(d, "----------");
	printf("Before   concat source: %s\n", s);
	printf("Before   concat destination: %s\n", d);
	printf("Return value: %ld\n", ft_strlcat(d, s, 23));
	ft_strlcat(d, s, 23);
	printf("After ft_strlcat() source: %s\n", s);
	printf("After ft_strlcat() destination: %s\n", d);
	return (0);
}
