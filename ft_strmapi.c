/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kgajadie <kgajadie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 12:04:03 by kgajadie      #+#    #+#                 */
/*   Updated: 2020/11/22 12:04:04 by kgajadie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*answer;

	if (!s || !(*f))
		return (0);
	answer = ft_strdup(s);
	if (!answer)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		answer[i] = (*f)(i, s[i]);
		if (!answer[i])
			return (0);
		i++;
	}
	return (answer);
}
