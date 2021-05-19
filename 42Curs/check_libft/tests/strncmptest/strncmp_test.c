#include <stdio.h>
#include <string.h>

#define SIZE 26

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main (void)
{
	char	str1[20];
	char	str2[20];
	int		result1;
	int		result2;

	strcpy(str1, "hell");
	strcpy(str2, "hell");
	result1 = strncmp(str1, str2, SIZE);
	result2 = ft_strncmp(str1, str2, SIZE);
	printf("Return of    strncmp %d\n", result1);
	printf("Return of ft_strncmp %d\n", result2);
	return (0);
}
