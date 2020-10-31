#include <string.h>

size_t ft_strlen(const char *s)
{
	unsigned long len;

	len = 0;
	while (*s++)
	{
		len++;
	}
	return (len);
}