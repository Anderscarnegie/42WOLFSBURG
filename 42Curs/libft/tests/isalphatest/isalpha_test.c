#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int ch);

int	main(void)
{
	char	c;

	c = 'Q';
	printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));
	printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));
	c = 'q';
	printf("\nResult when lowercase alphabet is passed: %d", isalpha(c));
	printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));
	c ='+';
	printf("\nResult when non-alpha character is passed: %d", isalpha(c));
	printf("\nResult when non-alpha character is passed: %d\n", ft_isalpha(c));
	return (0);
}
