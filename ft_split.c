/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kgajadie <kgajadie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 11:42:42 by kgajadie      #+#    #+#                 */
/*   Updated: 2020/11/22 16:39:20 by kgajadie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_words_count(char const *s, char c)
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
			k++;
			len = 0;
		}
		else
			i++;
	}
	return (k);
}

static	char	**ft_free_td_array(char **td_array, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		free(td_array[i]);
		i++;
	}
	free(td_array);
	return (NULL);
}

static	char	**ft_create_td_array(char const *s, char c)
{
	char	**td_array;
	int		words_count;

	words_count = ft_words_count(s, c);
	td_array = ft_calloc((words_count + 1), sizeof(*td_array));
	if (!td_array)
		return (ft_free_td_array(td_array, 0));
	return (td_array);
}

static	int		ft_fill_td_array(char const *s, char c)
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
			printf("\n[%d, %d]\n", i - len, len); // HIER WAS JE GEBLEVEN. ZET STRDUP ERIN.
			k++;
			len = 0;
		}
		else
			i++;
	}
	return (k);
}


static	int		ft_aantal_delims(char const *s, char c)
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

static	void	ft_helper_get_indexes(char const *s, char c, int *indexes)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = 0;
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
}

static	int		*ft_get_indexes(char const *s, char c)
{
	int		*indexes;

	indexes = malloc(ft_aantal_delims(s, c) * sizeof(*indexes));
	if (!indexes)
		return (0);
	ft_helper_get_indexes(s, c, indexes);
	return (indexes);
}

static	char	**free_kodak(char **a, int i)
{
	while (index > 0)
	{
		free(a[i - 1]);
		i--;
	}
	free(a);
	return (NULL);
}

char			**ft_split(char const *s, char c)
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
		if (!a[j])
			return (free_kodak(a, j));
		j++;
		i = i + 2;
	}
	a[j] = NULL;
	free(indexes);
	return (a);
}

int main(void)
{
	char *s = " Hello World";
	char d = ' ';
	// char **tda;
	// tda = ft_split(s, d);
	// printf("\ntda[0] = %s\n", tda[0]);
	// printf("\nft_words_count() = %d", ft_words_count(s, d));
	ft_fill_td_array(s, d);
	return (0);
}
