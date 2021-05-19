#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int ch);

int	main (void)
{
	const char	str[] = "Find char and return pointer to it$";
	char		*ret;
	const char	ch = '\0';

	ret = strchr(str, ch);
	printf("String starting from |%c| is - |%s| %p\n", ch, ret, ret);
	ret = ft_strchr(str, ch);
	printf("String starting from |%c| is - |%s| %p\n", ch, ret, ret);
	return (0);
}
