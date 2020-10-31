#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *d = dst;
	const char *s = src;
	unsigned long i = 0;
	unsigned long j = 0;
	char *d_last;
	const char *s_last;

	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		d_last = d + (len - 1);
		s_last = s + (len - 1);
		while (j < len)
		{
			*(d_last - j) = *(s_last - j);
			j++;
		}
	}
	return (dst);
}
