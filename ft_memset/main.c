#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len);

int main()
{
	char str[14] = "Hello, World!";
	printf("\nBefore memset(): %s\n", str);
	// Fill 8 characters starting from str[13] with '.'
	memset(str, '.', 8 * sizeof(char));
	printf("After memset():  %s", str);

	
	char str_twee[14] = "Hello, World!";
	printf("\nBefore ft_memset():  %s\n", str_twee);
	ft_memset(str_twee, '.', 8 * sizeof(char));
	printf("After ft_memset():   %s", str_twee);
	return 0;
}