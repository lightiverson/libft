#include <string.h>
#include <stdio.h>

void* ft_memmove(void *dst, const void *src, size_t len);

int main (void)
{
    char* source = "Hello, World!";
    char dest[50] = "zzzzzzzzzzzzzzz";

    printf("\nBefore memmove(): %s\n", dest);
    memmove(dest, source, 5);
    printf("After memmove(): %s\n", dest);

    char ft_dest[50] = "zzzzzzzzzzzzzzz";
    printf("\nBefore ft_memmove(): %s\n", ft_dest);
    ft_memmove(ft_dest, source, 5);
    printf("After ft_memmove(): %s\n", ft_dest);    
}