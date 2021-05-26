#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int ch);

int	main(void)
{
	int	ch;

	ch = 125;
	while (ch <= 130)
	{
		printf("%d            ", ch);
		if (isascii(ch))
			printf("The character is %c\n", ch);
		else
			printf("Cannot be represented by an ASCII character\n");
		printf("%d    ft      ", ch);
		if (ft_isascii(ch))
			printf("The character is %c\n", ch);
		else
			printf("Cannot be represented by an ASCII character\n");
		ch++;
	}
	return (0);
}
