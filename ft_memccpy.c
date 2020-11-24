/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kgajadie <kgajadie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 12:08:07 by kgajadie      #+#    #+#                 */
/*   Updated: 2020/11/24 15:13:39 by kgajadie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
const void *restrict src, int c, size_t n)
{
	size_t			i;
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
