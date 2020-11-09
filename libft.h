#ifndef LIBFT_H
#define LIBFT_H

// deze weghalen!
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>

void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int	ft_isdigit(int c);

int	ft_isspace(int c); // not required. self choosen. check the rules.

#endif