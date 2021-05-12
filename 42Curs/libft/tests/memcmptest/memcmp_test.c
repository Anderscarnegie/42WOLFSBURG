#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t count);

int	main (void)
{
	char	str1[15];
	char	str2[15];
	int		ret;

	memcpy(str1, "abcd", 6);
	memcpy(str2, "abcdef", 6);
	ret = memcmp(str1, str2, 5);
	if (ret > 0)
	{
		printf("str2 is less than str1\n");
	}
	else if (ret < 0)
	{
		printf("str1 is less than str2\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}
	ret = ft_memcmp(str1, str2, 5);
	if (ret > 0)
	{
		printf("str2 is less than str1\n");
	}
	else if (ret < 0)
	{
		printf("str1 is less than str2\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}
	return (0);
}
