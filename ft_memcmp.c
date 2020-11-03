#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long i = 0;
	unsigned const char* str1 = s1;
	unsigned const char* str2 = s2;

	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

// int main (void)
// {
// 	char s1[] = "\200ello, World!";
// 	char s2[] = "\0Foo, barrrrrr";

// 	int x = memcmp(s1, s2, 14);
// 	printf("x = %d\n", x);

// 	// printf("\n%d", 'H' - 'F');
// 	// unsigned char y = '\200' - '\0';
// 	// printf("\n%d", y);

// 	int z = ft_memcmp(s1, s2, 14);
// 	printf("z = %d\n", z);
// 	return (0);
// }