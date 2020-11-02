#ifndef LIBFT_H
#define LIBFT_H

// deze weghalen!
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);

#endif