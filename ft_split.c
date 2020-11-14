#include "libft.h"

int ft_aantal_delims(char *s, char c)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			k++;
		i++;
	}
	return (k + 1 + 1);
}

int *ft_get_indexes(char *s, char c)
{
	int* indexes;
	int i;	
	int j;
	int count;

	i = 0;
	j = 0;
	count = ft_aantal_delims(s, c);
	indexes = malloc(count * sizeof(*indexes));
	if (!indexes)
		return (0);
	
	indexes[j] = 0;
	j++;
	
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			indexes[j] = i + 1;
			j++;
		}
		i++;
	}

	indexes[j] = i + 1;
	return (indexes);
}

int ft_split(char *s, char c) // not the right prototype!!
{
	int i;
	int *indexes;
	int numb_of_delims;

	i = 0;
	indexes = ft_get_indexes(s, c);
	numb_of_delims = ft_aantal_delims(s, c);
	printf("\nnumb_of_delims = %d\n", numb_of_delims);

	while (i < numb_of_delims - 1)
	{
		printf("\nft_substr() = %s\n", ft_substr(s, indexes[i], indexes[i + 1] - 1 - indexes[i]));
		i++;
	}

	return (0);
}



int main (void)
{
	char *s = "Foo_Bar_Baz";
	char c = '_';
	// int y = ft_aantal_delims(s, c);
	// printf("\ny = %d", y);
	
	// int *y = ft_get_indexes(s, c);
	// int z = ft_aantal_delims(s, c);
	// printf("\nz = %d\n", z);
	
	// int loop;
	// for(loop = 0; loop < z; loop++)
    // 	printf("%d ", y[loop]);

	// printf("\nft_substr() = %s\n", ft_substr(s, 0, 3));
	// printf("\nft_substr() = %s\n", ft_substr(s, 4, 7 - 4));
	// printf("\nft_substr() = %s\n", ft_substr(s, 8, 10 - 7));

	// int i = 0;
	// while (i < z)
	// {
	// 	printf("\n%s\n", ft_substr(s, y[i], y[i + 1] - 1 - y[i]));
	// 	i++;
	// }

	ft_split(s, c);
	
	return (0);
}