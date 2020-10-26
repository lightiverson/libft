// create main function
// create character array aka string variable
// print string
// execute memset function
// print string
// observe what happened

#include <stdio.h>
#include <string.h>

void * ft_memset(void *b, int c, size_t len)
{
	// wat doet de functie
	// pakt een string en vervangt de characters van die string met c tot length len
	// fill a byte string with a byte value
	// memset() is used to fill a block of memory with a particular value.

	// loop over b
	printf("\nIn ft_memset():  %s", b);

	// while (b != '\0') {
	// 	printf("%c", b);
	// 	b++;
	// }
	// voor elke iteratie verander i in c

	// verander void string in character string zodat je erover kan loopen
	unsigned char *ptr = b;
	// printf("\n%c", *ptr);

	// while (*ptr)
	// {
	// 	printf("\n%c", *ptr);
	// 	*ptr++;
	// }


	int i = 0;
	while (ptr[i] != '\0')
	{
		printf("\n%c", ptr[i]);
		i++;
	}
	
	return b;
}

int main()
{
	char str[14] = "Hello, World!";
	printf("\nBefore memset(): %s\n", str);

	// Fill 8 characters starting from str[13] with '.'
	memset(str, '.', 8 * sizeof(char));

	printf("After memset():  %s", str);

	ft_memset(str, '.', 8 * sizeof(char));
	return 0;
}