#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int ch, size_t length);

int	main(void)
{
	char	str[50];

	strcpy(str, "Changing specific count of characters");
	printf("\nBefore   memset(): %s\n", str);
	memset(str, 36, 8);
	printf("After    memset(): %s\n", str);
	ft_memset(str, 38, 8 * sizeof(str[0]));
	printf("After ft_memset(): %s\n\n", str);
	return (0);
}
