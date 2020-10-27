#include <string.h>
#include <stdio.h>

// char * ft_strchr(const char *s, int c)
// {
//     char *fake = "fake";

//     int i = 0;

//     while (s[i] != '\0')
//     {
//         // printf("\n%c\n", s[i]);
//         // printf("%c", c); // no need to convert because C handles intigers as characters due to asci.
//         if (s[i] == c)
//         {
//             // return (&(s[i]));
//             return (((char*)&(s[i])));
//         }
//         i++;
//     }
    
//     return (fake);
// }

char * ft_strchr(const char *s, int c)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == (char)c) // c getypecast naar char staat in de man pages.
        {
            return (((char*)&(s[i])));
        }
        i++;
    }
    return (0);
}