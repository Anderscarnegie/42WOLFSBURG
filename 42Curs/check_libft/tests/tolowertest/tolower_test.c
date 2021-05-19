#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	ft_tolower(int c);

int	main (void)
{
	int		i;
	char	c;
	char	str[50];

	i = 0;
	strcpy(str, "TO LOWER Case & IF 1978 AZ [@`{\n");
	printf("%s", str);
	while (str[i])
	{	
		c = (tolower(str[i]));
		printf("%c", c);
		i++;
	}
	i = 0;
	while (str[i])
	{	
		c = (ft_tolower(str[i]));
		printf("%c", c);
		i++;
	}
	printf("\n");
	return (0);
}
