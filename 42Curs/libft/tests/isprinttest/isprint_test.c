#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int ch);

int	main(void)
{
	int	ch;

	ch = 124;
	while (ch <= 127)
	{
		printf("%d            ", ch);
		if (isprint(ch))
			printf("The character is printable %c\n", ch);
		else
			printf("Is not printable \n");
		printf("%d    ft      ", ch);
		if (ft_isprint(ch))
			printf("The character is printable %c\n", ch);
		else
			printf("Is not printable \n");
		ch++;
	}
	return (0);
}
