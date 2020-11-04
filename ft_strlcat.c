#include "libft.h"

// size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
// {
// 	size_t total_len = strlen(dst) + strlen(src);
// 	int i = 0;
// 	printf("\ndstsize = %zu\n", dstsize);
// 	size_t dst_len = strlen(dst); // is 6. dst[6] is null terminating char
// 	printf("DEBUG: %zu\n", dst_len);
// 	printf("[5] = %c\n", dst[5]);
// 	while (dst_len < dstsize)
// 	{
// 		printf("\ndst_len = %zu", dst_len);
// 		dst[dst_len] = src[i];
// 		dst_len++;
// 		i++;
// 	}
// 	printf("\nDEBUG: %zu\n", dst_len);
// 	dst[dst_len] = '\0';
// 	return (total_len);
// }

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

// int main (void)
// {
// 	char dst[16] = "Hello,"; // size 8
// 	char src[] = "World!"; // size 7
// 	int size = 0;

// 	printf("Before strlcat() = %s\n", dst);
// 	int total_len = strlcat(dst, src, size);
// 	printf("After strlcat() = %s\n", dst);
// 	printf("total_len = %d\n", total_len);

// 	// Own function
// 	char ft_dst[16] = "Hello,"; // size 8
// 	char ft_src[] = "World!"; // size 7	
// 	printf("\nBefore ft_strlcat(): %s\n", ft_dst);
// 	int ft_total_len = ft_strlcat(ft_dst, ft_src, size);
// 	printf("After ft_strlcat(): %s\n", ft_dst);
// 	printf("ft_total_len = %d\n", ft_total_len);
	
// 	return (0);
// }