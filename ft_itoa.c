#include "libft.h"

int ft_calc_digits(int i)
{
	int d = 0;
	while (i !=  0)
	{
		d++;
		i = i / 10;
	}
	return(d);
}

char *ft_itoa(int n)
{
	char c;
	int i = 0;
	char *ret;
	int len = ft_calc_digits(n);
	ret = malloc(len + 1);
	int flag = 0;
	if (!ret)
	{
		return (0);
	}
	// while (n != 0)
	// {
	// 	c = (n % 10) + '0';
	// 	ret[i] = c;
	// 	i++;
	// 	printf("\n%d\n", len--);
	// 	n = n / 10;
	// }

	if (n < 0)
	{
		n * -1;
		flag = 1;
	}
	

	while (n != 0)
	{
		c = (n % 10) + '0';
		ret[len - 1 - i] = c;
		i++;
		n = n / 10;
	}
	ret[i] = '\0';
	return (ret);
}

int main(void)
{
	char* test;
	test = ft_itoa(-156);
	printf("\n%s\n", test);
	return(0);
}