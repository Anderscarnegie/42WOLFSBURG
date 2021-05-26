#include "libft.h"
#include <string.h>

int	main(void)
{
	int	n;

	n = -2147483648;
	ft_putnbr_fd(n, 1);
	ft_putstr_fd("\n", 0);
	n = 2147483647;
	ft_putnbr_fd(n, 2);
	ft_putstr_fd("\n", 0);
	return (0);
}
