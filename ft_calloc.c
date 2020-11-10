#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;

	if ((count == 0) || (size == 0))
	{
		count = 1;
		size = 1;
	}
	a = malloc(count * size);
	if (a)
		ft_bzero(a, count * size);
	return (a);
}
