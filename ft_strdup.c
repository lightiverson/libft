#include "libft.h"

/*
** DESCRIPTION
** The strdup() function allocates
** sufficient memory for a copy of the string s1, does the
** copy, and returns a pointer to it.
** The pointer may subsequently be used as an argument
** to the function free(3).
**
** If insufficient memory is available,
** NULL is returned and errno is set to ENOMEM.
*/

char	*ft_strdup(const char *s1)
{
	size_t	s1_len;
	char	*res;

	s1_len = ft_strlen(s1) + 1;
	res = malloc(s1_len);
	if (!res)
		return (0);
	ft_memcpy(res, s1, s1_len);
	return (res);
}
