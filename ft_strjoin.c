#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		clen;
	char	*ret;

	if ((s1 == 0) || (s2 == 0))
	{
		return (0);
	}
	clen = ft_strlen(s1) + ft_strlen(s2);
	ret = malloc(clen + 1);
	if (!ret)
	{
		return (0);
	}
	ft_strlcpy(ret, s1, clen + 1);
	ft_strlcat(ret, s2, clen + 1);
	return (ret);
}
