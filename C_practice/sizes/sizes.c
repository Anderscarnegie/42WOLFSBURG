#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("Size of int is %d bytes\n", (int)sizeof(int));
    printf("Size of unsigned int is %d bytes\n", (int)sizeof(unsigned int));
    printf("Size of char is %d bytes\n", (int)sizeof(char));
    printf("Size of float is %d bytes\n", (int)sizeof(float));
    printf("Size of double is %d bytes\n", (int)sizeof(double));
    printf("Size of long is %d bytes\n", (int)sizeof(long));
    printf("Size of long long is %d bytes\n", (int)sizeof(long long));
    return (0);
}
