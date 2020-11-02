#include "libft.h"

/*
char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return (((char*)&(s[i])));
		}
		i++;
	}
	return (0);
}
*/

char	*ft_strchr(const char *s, int c)
{
	// while (*s != (char)c)
	// 	if (!*s++)
	// 		return 0;
	// return (char *)s;

	int i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
		{
			return 0;
		}
		i++;
	}
	return (((char *)&(s[i])));
}
