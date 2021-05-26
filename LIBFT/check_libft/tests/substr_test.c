#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	str[50];

	strcpy(str, "Take substring from any part of this one");
	printf("Take substring from any part of this one\n");
	printf("Index 3 length 5: %s\n", ft_substr(str, 3, 5));
	printf("Index 0 length 4: %s\n", ft_substr(str, 0, 4));
	printf("Index 36 length 5: %s\n", ft_substr(str, 36, 5));
	return (0);
}
