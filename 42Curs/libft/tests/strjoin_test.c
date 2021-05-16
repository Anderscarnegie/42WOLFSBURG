#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	a[30];
	char	b[30];
	char	*join;

	strcpy(a, "Some word");
	strcpy(b, "Another one");
	printf("Prefix : %s of length %ld\n", a, ft_strlen(a));
	printf("Suffix : %s of length %ld\n", b, ft_strlen(b));
	join = ft_strjoin(a, b);
	printf("Joined string : %s of length %ld\n", join, ft_strlen(join));
	free(join);
	return (0);
}
