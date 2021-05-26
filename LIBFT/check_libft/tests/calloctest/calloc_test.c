#include <stdio.h>
#include <libft.h>

int	main (void)
{
	int	i;
	int	n;
	int	*a;
	int	*b;

	printf("Number of elements to be entered:");
	scanf("%d", &n);
	a = (int *)calloc(n, sizeof(int));
	b = (int *)ft_calloc(n, sizeof(int));
	printf("Enter %d numbers:\n", n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &a[i]);
		b[i] = a[i];
		i++;
	}
	printf("The numbers entered are: \n");
	i = 0;
	while (i < n)
	{
		printf("%d    ft %d\n", a[i], b[i]);
		i++;
	}
	free(a);
	free(b);
	return (0);
}
