#include <stdio.h>
#include <string.h>

size_t	ft_strlen(char *str);

int	main(void)
{
	char	a[20];
	char	b[20];

	strcpy(a, "Program");
	strcpy(b, "How many");
	printf("Length of string a = %ld \n", strlen(a));
	printf("Length of string b = %ld \n", strlen(b));
	printf("Length of string a = %ld \n", ft_strlen(a));
	printf("Length of string b = %ld \n", ft_strlen(b));
	return (0);
}
