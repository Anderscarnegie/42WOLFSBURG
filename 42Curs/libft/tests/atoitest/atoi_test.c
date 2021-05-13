#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *str);

int	main (void)
{
	int		val;
	char	str[20];

	strcpy(str, "");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
	val = ft_atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
	strcpy(str, "tutorialspoint.com");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
	val = ft_atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
	return (0);
}
