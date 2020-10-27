#include <string.h>

void * ft_memchr(const void *s, int c, size_t n)
{
    unsigned int i = 0;

    while (i < n)
    {
        if ( ((unsigned char *)s)[i] == (unsigned char)c)
        {
            return ( (void *)&(s[i]) );
        }
        i++;
    }

    return (0);
}