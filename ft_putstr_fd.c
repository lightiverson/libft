/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kgajadie <kgajadie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 12:41:13 by kgajadie      #+#    #+#                 */
/*   Updated: 2020/11/22 12:42:04 by kgajadie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t s_len;

	if (!s)
		return ;
	s_len = ft_strlen(s);
	write(fd, s, s_len);
}
