#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int ch, size_t count);

int	main (void)
{
	const char	str[] = "http://www.tutorialspoint.com";
	const char	ch = 'u';
	char		*ret;

	ret = memchr(str, ch, strlen(str));
	printf("String starting from |%c| is - |%s|\n", ch, ret);
	ret = ft_memchr(str, ch, strlen(str));
	printf("String starting from |%c| is - |%s|\n", ch, ret);
	return (0);
}
