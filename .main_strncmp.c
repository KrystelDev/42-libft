#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char s1[20] = "abcdef";
    char s2[20] = "abcdefghijklmnop";
    unsigned int n = 6;
    int int_strcmp = strncmp(s1, s2, n); 
    printf("MAIN - strncmp: %d", int_strcmp);
    int_strcmp = 0;
	printf("\n");
    int_strcmp = ft_strncmp(s1, s2, n);
    printf("MAIN - ft_strncmp: %d", int_strcmp);
	printf("\n");
}