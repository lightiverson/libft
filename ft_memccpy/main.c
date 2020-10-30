#include <string.h>
#include <stdio.h>

int main(void)
{
	char *src = "Hello, World!";
	char dst[20];
	printf("\nBefore memcpy: %s\n", dst);
	memccpy(dst, src, 'e', 5);
	printf("\nAfter memcpy: %s\n", dst);

	return (0);
}