#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *str1, const void *str2, size_t count);

int	main (void)
{
	char	str[50];

	strcpy(str, "memmove can be very useful......");
	puts (str);
	memmove (str + 20, str + 15, 11);
	puts (str);
	strcpy(str, "memmove can be very useful......");
	puts (str);
	ft_memmove (str + 20, str + 15, 11);
	puts (str);
	strcpy(str, "memmove can be very useful......");
	puts (str);
	memmove (str + 10, str + 15, 11);
	puts (str);
	strcpy(str, "memmove can be very useful......");
	ft_memmove (str + 10, str + 15, 11);
	puts (str);
	return (0);
}
