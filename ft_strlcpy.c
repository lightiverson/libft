#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned long srclen = ft_strlen(src);
	unsigned long i = 0;

	if (dstsize == 0)
	{
		return (srclen);
	}

	if (srclen == 0)
	{
		dst[0] = '\0';
		return (srclen);
	}

	while ((src[i] != '\0') && (i < (dstsize - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}