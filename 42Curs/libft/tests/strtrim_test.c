#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	str[30];
	char	set[10];
	char	*r;

	strcpy(str, "sam ple to trim off mas");
	strcpy(set, "msa ");
	printf("Source           : %s\n", str);
	printf("Symbols to trim  : %s\n", set);
	printf("Resulting to     : %s\n", r = ft_strtrim(str, set));
	strcpy(str, "abcdefghhgefdcba");
	strcpy(set, "acb de");
	printf("Source           : %s\n", str);
	printf("Symbols to trim  : %s\n", set);
	printf("Resulting to     : %s\n", r = ft_strtrim(str, set));
	free(r);
	return (0);
}
