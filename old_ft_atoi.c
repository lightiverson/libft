/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kgajadie <kgajadie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 17:01:34 by kgajadie      #+#    #+#                 */
/*   Updated: 2020/11/17 17:02:00 by kgajadie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int		ft_atoi(const char *str)
// {
// 	int i;
// 	int a;
// 	int sign;

// 	i = 0;
// 	a = 0;
// 	sign = 1;
// 	while (ft_isspace(str[i]))
// 		i++;
// 	while ((str[i] == '-') || (str[i] == '+'))
// 	{
// 		if (str[i] == '-')
// 			sign = -1;
// 		i++;
// 	}
// 	while (ft_isdigit(str[i]))
// 	{
// 		a = (a * 10) + (str[i] - '0');
// 		if (sign == -1)
// 		{
// 			if ((a > (2147483648 / 10)) && ((str[i + 1] - '0') > 8))
// 				return (0);
// 		}
// 		else
// 		{
// 			if ((a > (2147483647 / 10)) && ((str[i + 1] - '0') > 7))
// 				return (-1);
// 		}
// 		i++;
// 	}
// 	if (sign == -1)
// 		a = a * sign;
// 	return (a);
// }

// Norminette Proof but might not pass.
int		ft_atoi(const char *str)
{
	int			i;
	long int	a;
	int			sign;

	i = 0;
	a = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	while ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (ft_isdigit(str[i]) && (a <= 2147483648))
	{
		a = (a * 10) + (str[i] - '0');
		i++;
	}
	if ((a > 2147483648) && (sign == -1))
		return (0);
	if ((a > 2147483647) && (sign == 1))
		return (-1);
	if (sign == -1)
		a = a * sign;
	return (a);
}