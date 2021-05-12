#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t length);

int	main(void)
{
	char	src[50];
	char	dest[50];

	strcpy(src, "Memcpy copies from src to dest n bytes");
	strcpy(dest, "Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	memcpy(dest, src, 3);
	printf("After  memcpy dest = %s\n", dest);
	printf("Before ft_memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, 6);
	printf("After  ft_memcpy dest = %s\n", dest);
	return (0);
}
