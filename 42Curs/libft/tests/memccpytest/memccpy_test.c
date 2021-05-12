#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int ch, size_t length);

int	main(void)
{
	char	src[40];
	char	dest[40];

	strcpy(src, "Memcpy copies from src to dest n bytes");
	strcpy(dest, "Heloooo!!");
	printf("Source string = %s\n", src);
	printf("Before memccpy dest = %s\n", dest);
	memccpy(dest, src, 'M', 3);
	printf("After  memccpy dest = %s\n", dest);
	printf("Before ft_memccpy dest = %s\n", dest);
	printf("After dest = %s\n", (char *)ft_memccpy(dest, src, 'c', 6));
	ft_memccpy(dest, src, 'c', 4);
	printf("After  ft_memccpy dest = %s\n", dest);
	return (0);
}
