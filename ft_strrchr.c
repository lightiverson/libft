/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kgajadie <kgajadie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 16:33:10 by kgajadie      #+#    #+#                 */
/*   Updated: 2020/11/17 16:33:32 by kgajadie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*located;

	i = 0;
	located = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			located = ((char *)&(s[i]));
		}
		i++;
	}
	if ((char)c == '\0')
	{
		located = ((char *)&(s[i]));
	}
	if (located == NULL)
	{
		return (NULL);
	}
	return (located);
}
