#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	// unsigned long dst_len = ft_strlen(dst);
	unsigned long i;
	unsigned long len;

	i = 0;
	len = ft_strlen(src);
	if (!dst || !src)
		return (0);	
	if (dstsize == 0)
	{
		return (0);
	}
	else
	{
		while (i < (dstsize - 1) && dst[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (len);
	}
}
