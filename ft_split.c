#include "libft.h"

int		ft_aantal_delims(char const *s, char c)
{
	int i;
	int len;
	int k;

	i = 0;
	len = 0;
	k = 0;
	while (s[i])
	{
		while ((s[i] != c) && (s[i] != '\0'))
		{
			len++;
			i++;
		}
		if (len > 0)
		{
			k = k + 2;
			len = 0;
		}
		else
			i++;
	}
	return (k);
}

int		*ft_get_indexes(char const *s, char c)
{
	int		i;
	int		j;
	int		len;
	int		*indexes;

	i = 0;
	j = 0;
	len = 0;
	indexes = malloc(ft_aantal_delims(s, c) * sizeof(*indexes));
	if (!indexes)
		return (0);
	while (s[i])
	{
		while ((s[i] != c) && (s[i] != '\0'))
		{
			len++;
			i++;
		}
		if (len > 0)
		{
			indexes[j++] = i - len;
			indexes[j++] = len;
			len = 0;
		}
		else
			i++;
	}
	return (indexes);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			j;
	int			*indexes;
	char		**a;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	indexes = ft_get_indexes(s, c);
	a = malloc((ft_aantal_delims(s, c) / 2) * sizeof(*a) + 1);
	if (!a)
	{
		free(indexes);
		free(a);
		return (0);
	}
	while (i < ft_aantal_delims(s, c))
	{
		a[j] = ft_substr(s, indexes[i], indexes[i + 1]);
		j++;
		i = i + 2;
	}
	a[j] = NULL;
	return (a);
}
