#include "libft.h"

int ft_aantal_delims(char const *s, char c)
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

int *ft_get_indexes(char const *s, char c)
{
	int i;	
	int j;
	int count;
	int* indexes;
	int len;

	i = 0;
	j = 0;
	len = 0;
	count = ft_aantal_delims(s, c);
	indexes = malloc(count * sizeof(*indexes));
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
			indexes[j] = i - len;
			j++;
			indexes[j] = len;
			j++;
            len = 0;
        }
        else
            i++;
    }
	return (indexes);
}

char **ft_split(char const *s, char c)
{
	int i;
	int j;	
	int *indexes;
	int numb_of_delims;
	char **a;

	if (!s)
		return (0);

	i = 0;
	j = 0;
	indexes = ft_get_indexes(s, c);
	numb_of_delims = ft_aantal_delims(s, c);
	a = malloc((numb_of_delims / 2) * sizeof(*a) + 1);
	if (!a)
	{
		free(indexes);
		free(a);
		return (0);
	}
	while (i < numb_of_delims)
	{
		a[j] = ft_substr(s, indexes[i], indexes[i + 1]);
		i = i + 2;
		j++;
	}
	a[j] = NULL;
	return (a);
}

int main(void)
{
	char *s = "      split       this for   me  !       ";
	char **result = ft_split(s, ' ');
	while (*result)
	{
		printf("%s\n", *result);
		result++;
	}
	return (0);
}
