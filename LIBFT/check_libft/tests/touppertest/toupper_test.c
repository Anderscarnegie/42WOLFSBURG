#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	ft_toupper(int c);

int	main (void)
{
	int		i;
	char	c;
	char	str[50];

	i = 0;
	strcpy(str, "To Upper Case & If 1978 az [@`{\n");
	printf("%s", str);
	while (str[i])
	{	
		c = (toupper(str[i]));
		printf("%c", c);
		i++;
	}
	i = 0;
	while (str[i])
	{	
		c = (ft_toupper(str[i]));
		printf("%c", c);
		i++;
	}
	printf("\n");
	return (0);
}
