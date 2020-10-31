#include <string.h>
#include <stdio.h>

void * ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

int main(void)
{
	char *src = "Hello, World!";
	char dst[20];
	printf("\nBefore memcpy: %s\n", dst);
	memccpy(dst, src, 'e', 5);
	printf("After memcpy: %s\n", dst);


	char ft_dst[20];
	printf("\nBefore ft_memccp: %s\n", ft_dst);
	ft_memccpy(ft_dst, src, 'e', 5);
	printf("After ft_memccp: %s\n", ft_dst);	

	return (0);
}