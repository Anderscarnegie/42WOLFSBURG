#include "libft.h"
#include <string.h>

int	main(void)
{
	char	s[15];

	strcpy(s, "Hello World!");
	ft_putstr_fd(s, 1);
	ft_putstr_fd("HELLO", 0);
	ft_putstr_fd("WORLD", 2);
	return (0);
}
