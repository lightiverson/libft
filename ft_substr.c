#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a substring
** from the string ’s’.
** The substring begins at index ’start’ and is of
** maximum size ’len’.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	end;
	int				i;

	end = start + len;
	res = malloc(len + 1);
	i = 0;
	if (!s)
		return (0);
	if (!res)
		return (0);
	if (start >= ft_strlen(s))
	{
		ft_bzero(res, 1);
		return (res);
	}
	while (start < end)
	{
		res[i] = s[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
