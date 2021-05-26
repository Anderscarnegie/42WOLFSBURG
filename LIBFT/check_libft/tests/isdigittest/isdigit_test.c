#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int ch);

int	main(void)
{
	char	c;

	c = 'Q';
	printf("\nResult when uppercase alphabet is passed: %d", isdigit(c));
	printf("\nResult when uppercase alphabet is passed: %d", ft_isdigit(c));
	c = '9';
	printf("\nResult when digit is passed: %d", isdigit(c));
	printf("\nResult when digit is passed: %d", ft_isdigit(c));
	c ='3';
	printf("\nResult when digit is passed: %d", isdigit(c));
	printf("\nResult when digit is passed: %d\n", ft_isdigit(c));
	return (0);
}
