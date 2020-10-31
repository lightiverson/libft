#include <string.h>

void	*ft_memccpy(void *restrict dst,
const void *restrict src, int c, size_t n)
{
	unsigned long	i;
	char			*d;
	const char		*s;

	i = 0;
	d = dst;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == (char)c)
		{
			return (&d[i + 1]);
		}
		i++;
	}
	return (0);
}
