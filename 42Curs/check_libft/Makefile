all:
		gcc -I. -c unity.c check_libft.c 
		gcc unity.o check_libft.o libft.a -lbsd
		rm -f *.o

clean:
		rm -f *.o a.out

.PHONY: clean all