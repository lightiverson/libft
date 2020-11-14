#include "libft.h"

int		ft_int2pwr(int x, int n)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (i < n)
	{
		result *= x;
		i++;
	}
	return (result);
}

int		ft_intlen(int n)
{
	int len;

	len = 1;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_intlen(n);
	str = malloc(len + 1);
	if (!str)
		return (0);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = n * -1;
		str[i] = '-';
		i++;
	}
	len = len - i;
	while (len > 0)
	{
		str[i++] = ((n / ft_int2pwr(10, len - 1)) % 10) + '0';
		len--;
	}
	str[i] = '\0';
	return (str);
}
