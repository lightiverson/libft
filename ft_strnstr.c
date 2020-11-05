#include "libft.h"

char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i = 0;
	size_t j = 0;

	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	
	while ((i < len) && (haystack[i] != '\0'))
	{
		while ((haystack[i + j] == needle[j]) || (needle[j] == '\0'))
		{
			if (needle[j] == '\0')
			{
				return ((char *)&haystack[i]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

// int main (void)
// {
// 	const char *largestring = "Foo Bar Baz";
// 	const char *smallstring = "Bar";
// 	char *ptr;

// 	// ptr = ft_strnstr(largestring, smallstring, 12);
// 	// printf("\nptr = %p", ptr);
// 	// printf("\nanswer = %s", ptr);
// 	// return (0);

// 	char dst[30];
// 	strlcpy(dst, largestring, 9);
// 	printf("\n%s\n", dst);
// }