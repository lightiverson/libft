/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kgajadie <kgajadie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 16:44:20 by kgajadie      #+#    #+#                 */
/*   Updated: 2020/11/17 16:45:27 by kgajadie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while ((i < len) && (haystack[i] != '\0'))
	{
		while (((haystack[i + j] == needle[j])
			&& ((i + j) < len)) || (needle[j] == '\0'))
		{
			if (needle[j] == '\0')
			{
				return ((char *)&haystack[i]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
