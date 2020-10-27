#include <stdio.h>
#include <string.h>

void * ft_memchr(const void *s, int c, size_t n);

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   char *ft_ret;
   ft_ret = ft_memchr(str, ch, strlen(str));
   printf("String after |%c| is - |%s|\n", ch, ft_ret);

   return(0);
}