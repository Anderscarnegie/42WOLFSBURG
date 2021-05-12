#include <stdio.h>
#include <string.h>

void	ft_bzero(void *str, size_t length);

int	main(void)
{
	char	str[50];

	strcpy(str, "Changing number of first characters to NULL bytes");
	printf("\nBefore   bzero(): %s\n", str);
	bzero(str + 6, 1);
	printf("After    bzero(): %s\n", str);
	ft_bzero(str + 4, 1 * sizeof(str[0]));
	printf("After ft_bzero(): %s\n\n", str);
	return (0);
}
