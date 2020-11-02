#include "libft.h"

int main (void)
{
	char* str = "Hello, World!";
	unsigned long len = strlen(str);
	printf("After strlen() = %lu\n", len);

	unsigned long ft_len = ft_strlen(str);
	printf("After ft_strlen() = %lu\n", ft_len);

	return (0);
}