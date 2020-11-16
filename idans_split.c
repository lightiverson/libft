#include "libft.h"
void    ft_free_array(char **array, int x)
{
    int i;
    i = 0;
    while (i < x)
    {
        free(array[i]);
        i++;
    }
    free(array);
    return ;
}
size_t  ft_count_words(char const *s, char c)
{
    size_t  i;
    size_t  words;
    i = 0;
    words = 0;
    while (s[i] == c)
        i++;
    while (s[i] != '\0')
    {
        while (s[i] == c)
        {
            if (s[i + 1] != c && s[i + 1] != '\0')
                words = words + 1;
            break ;
        }
        i++;
    }
    words += 1;
    return (words);
}
char    **ft_fill_in(char **array, const char *s, char c, int splits)
{
    int     i;
    int     j;
    int     k;
    k = 0;
    i = 0;
    while (splits)
    {
        while (s[i] == c)
            i++;
        j = i;
        while (s[i] != c)
            i++;
        array[k] = (char*)malloc(sizeof(char) * (i - j) + 1);
        if (array[k] == NULL)
            ft_free_array(array, (k + 1));
        array[k] = ft_substr(s, j, (i - j));
        k++;
        splits--;
    }
    return (array);
}
char    **ft_split(char const *s, char c)
{
    int     words;
    char    **arr;
    words = ft_count_words(s, c);
    arr = (char**)malloc(sizeof(char*) * words + 1);
    if (arr == NULL)
        return (NULL);
    arr[words] = NULL;
    return (ft_fill_in(arr, s, c, words));
}