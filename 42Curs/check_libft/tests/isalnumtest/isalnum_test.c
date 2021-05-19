#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int ch);

int	main(void)
{
	char	c;
	int		result;

	c = '5';
	result = isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);
	printf("ft_function result is %d\n", ft_isalnum(c));
	c = 'Q';
	result = isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);
	printf("ft_function result is %d\n", ft_isalnum(c));
	c = 'l';
	result = isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);
	printf("ft_function result is %d\n", ft_isalnum(c));
	c = '+';
	result = isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);
	printf("ft_function result is %d\n", ft_isalnum(c));
	return (0);
}
