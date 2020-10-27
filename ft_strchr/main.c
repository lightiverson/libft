#include <string.h>
#include <stdio.h>

char * ft_strchr(const char *s, int c);

int main(int argc, char const *argv[])
{
    const char *s = "Hello, World!";
    int c = 'o';
    printf("\nEchte strchr(): %c\n", *strchr(s, c));
    // Segmentation fault when trying to printf Null. If a match is not found.
    printf("\nNeppe ft_strchr(): %c\n", *ft_strchr(s, c));
    return 0;
}
