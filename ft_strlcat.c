#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int i = 0;
	size_t dst_len = ft_strlen(dst); // is 6. dst[6] is null terminating char
	size_t dst_len_o = ft_strlen(dst); // is 6. dst[6] is null terminating char
	if (dstsize > dst_len)
	{
		while (dst_len < dstsize - 1 && src[i])
		{
			dst[dst_len] = src[i];
			dst_len++;
			i++;
		}
		dst[dst_len] = '\0';
		return (dst_len_o + ft_strlen(src));
	}
	return (dstsize + ft_strlen(src));
}