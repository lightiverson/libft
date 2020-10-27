#include <string.h>

/*
void    *ft_memset(void *str, int c, int n)
{
    int i;
    i = 0;
    while (i < n)
    {
        ((unsigned char*)str)[i] = c;
        i++;
    }
    return (str);
}
*/

// fill a byte string with a byte value
void	*ft_memset(void *b, int c, size_t len)
{
	// unsigned long because size_t len is also an unsigned long.
	// and need to be compared later.
	unsigned long i;
	unsigned char *ptr;

	i = 0;
	ptr = b;

	while (i < len)
	{
		ptr[i] = c;
		i++;
	}

	return b;
}
