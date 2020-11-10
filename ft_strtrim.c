#include "libft.h"

int		in_set(const char *set, char c)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*n;
	int		s1_start;
	int		s1_end;

	s1_start = 0;
	if (!s1)
		return (0);
	s1_end = (ft_strlen(s1) - 1);
	while (s1[s1_start] != '\0')
	{
		if (!(in_set(set, s1[s1_start])))
			break ;
		s1_start++;
	}
	while (s1_end > s1_start)
	{
		if (!(in_set(set, s1[s1_end])))
			break ;
		s1_end--;
	}
	s1_end++;
	n = ft_substr(s1, s1_start, (s1_end - s1_start));
	return (n);
}
