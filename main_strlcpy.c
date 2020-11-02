#include "libft.h"

int main (void)
{
	//  whats the difference between declaring a string like this char* string[] = and char* string = ""?
	char src[] = "Hello, World";
	char dest[20] = "Zzzzzzzzzzzzzzz";
	printf("\nBefore strlcpy(): %s\n", dest);
	int x = strlcpy(dest, src, 5);
	printf("After strlcpy(): %s\n", dest);

	char ft_dest[20] = "Zzzzzzzzzzzzzzz";
	printf("\nBefore ft_strlcpy(): %s\n", ft_dest);
	int ft_x = ft_strlcpy(ft_dest, src, 5);
	printf("After ft_strlcpy(): %s\n", ft_dest);

	printf("\nx = %d\n", x);
	printf("ft_x = %d\n", ft_x);

	return (0);
}