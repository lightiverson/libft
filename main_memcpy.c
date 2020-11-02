#include "libft.h"

int main (void) {
	char	*src = "Hello, World!";
	char	dst[20];
	printf("\nBefore memcpy: %s\n", dst);
	memcpy(dst, src, 5);
	printf("\nAfter memcpy: %s\n", dst);

	char *ft_src = "Hello, World!";
	char ft_dst[20];
	printf("\nBefore ft_memcpy: %s\n", ft_dst);
	ft_memcpy(ft_dst, ft_src, 5);
	printf("\nAfter ft_memcpy: %s\n", ft_dst);

	return (0);
}