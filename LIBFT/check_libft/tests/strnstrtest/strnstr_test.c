#include <stdio.h>
#include <bsd/string.h>

#define LEN 50

char	*ft_strnstr(const char *str, const char *to_find, size_t len);

int	main (void)
{
	const char	str[] = "Find char and return pointer to it$";
	char		*ret;
	const char	tof[] = "";

	printf("String is - |%s|\n", str);
	ret = strnstr(str, tof, LEN);
	printf("String to find |%s| is - |%s| %p\n", tof, ret, ret);
	ret = ft_strnstr(str, tof, LEN);
	printf("String to find |%s| is - |%s| %p\n", tof, ret, ret);
	return (0);
}
