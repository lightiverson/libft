#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	i;
	unsigned char	*new_ptr;

	i = 0;
	new_ptr = b;
	while (i < len)
	{
		new_ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
