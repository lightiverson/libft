#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*d;
	const char		*s;
	unsigned long	i;
	char			*d_last;
	char			*s_last;

	d = dst;
	s = src;
	i = 0;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		i = 0;
		d_last = d + (len - 1);
		s_last = s + (len - 1);
		while (i < len)
		{
			*(d_last - i) = *(s_last - i);
			i++;
		}
	}
	return (dst);
}
