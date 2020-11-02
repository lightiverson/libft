#include "libft.h"

int main()
{
	char str[14] = "Hello, World!";

	printf("\nBefore bzero(): %s\n", str);
	fwrite(str, 1, sizeof(str), stdout);
	fputc('\n', stdout);

	bzero(str, 3);
	
	printf("\nAfter bzero():  %s\n", str);
	fwrite(str, 1, sizeof(str), stdout);
	fputc('\n', stdout);



	char str_twee[14] = "Hello, World!";

	printf("\nBefore ft_bzero(): %s\n", str_twee);
	fwrite(str_twee, 1, sizeof(str_twee), stdout);
	fputc('\n', stdout);

	ft_bzero(str_twee, 3);

	printf("\nAfter bzero():  %s\n", str_twee);
	fwrite(str_twee, 1, sizeof(str_twee), stdout);
	fputc('\n', stdout);

	return 0;
}
