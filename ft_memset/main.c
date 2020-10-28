#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len);

// int main()
// {
// 	char str[14] = "Hello, World!";
// 	printf("\nBefore memset(): %s\n", str);
// 	// Fill 8 characters starting from str[13] with '.'
// 	memset(str, '.', 8 * sizeof(char));
// 	printf("After memset():  %s", str);

	
// 	char str_twee[14] = "Hello, World!";
// 	printf("\nBefore ft_memset():  %s\n", str_twee);
// 	ft_memset(str_twee, '.', 8 * sizeof(char));
// 	printf("After ft_memset():   %s", str_twee);
// 	return 0;
// }

int main()
{
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	memset(str, '$', 7);
	puts(str);

	char strTwee[50];
	strcpy(strTwee, "This is string.h library function");
	puts(strTwee);
	ft_memset(strTwee, '$', 7);
	puts(strTwee);

	return (0);
}