// #include <string.h>
// size_t	ft_strlen(const char *s);
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned long i;
	unsigned long len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
	{
		return (0);
	}
	else
	{
		while (i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (len);
	}
}
