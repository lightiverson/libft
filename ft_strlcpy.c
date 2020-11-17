#include "libft.h"

/*
**  Description:
**  The strlcpy() function copies up to dstsize - 1 characters from the string
**  src to dst, NUL-terminating the result if dstsize is not 0.
**  Room for the NUL-terminator should be included in dstsize.
**
**  Returns:
**  total length of string it tries to create, aka length of src.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (!src || !dst)
	{
		return (0);
	}	
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

// Van iemand anders
// size_t      ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
//     size_t i;
//     i = 0;
//     if (!dst || !src)
//         return (0);
//     if (dstsize)
//     {
//         while (i < (dstsize - 1))
//         {
//             if (src[i])
//             {
//                 dst[i] = src[i];
//                 i++;
//             }
//             else
//                 break ;
//         }
//         if (dstsize != 0)
//             dst[i] = '\0';
//     }
//     return (ft_strlen(src));
// }