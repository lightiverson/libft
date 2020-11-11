#include "libft.h"

/*
** Calculates to the power of.
** Takes in base number and exponent.
*/
int   ft_int2pwr(int x, int n)
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

// char *ft_itoa(int n)
// {
// 	char c;
// 	int i = 0;
// 	int len = ft_calc_digits(n);
// 	char ret[len];
// 	while (n != 0)
// 	{
// 		c = (n % 10) + '0';
// 		ret[len - 1 - i] = c;
// 		i++;
// 		n = n / 10;
// 	}
// 	ret[i] = '\0';
// 	return (ft_strdup(ret));
// }

// char *ft_itoa(int n)
// {
// 	char *ret;
// 	int i;
// 	int len;
// 	char c;
	
// 	i = 0;
// 	len = ft_calc_digits(n);
// 	ret = malloc(len + 1);
// 	if (!ret)
// 	{
// 		return (0);
// 	}
// 	// while (n != 0)
// 	// {
// 	// 	c = (n % 10) + '0';
// 	// 	ret[i] = c;
// 	// 	i++;
// 	// 	printf("\n%d\n", len--);
// 	// 	n = n / 10;
// 	// }
	

// 	while (n > 0)
// 	{
// 		c = (n % 10) + '0';
// 		ret[len - 1 - i] = c;
// 		i++;
// 		n = n / 10;
// 	}
// 	ret[i] = '\0';
// 	return (ret);
// }

// char *ft_itoa(int n)
// {
// 	int index;
// 	int number_of_digits_in_n;
// 	char *answer;
	
// 	index = 0;
// 	number_of_digits_in_n = ft_calc_digits(n); // 5
// 	answer = malloc(number_of_digits_in_n + 1);
// 	while (number_of_digits_in_n > 0)
// 	{
// 		int x  = n / ft_int2pwr(10, (number_of_digits_in_n - 1));
// 		int y = x % 10;
// 		printf("\ny = %d\n", y);

// 		answer[index] = y + '0';
// 		index++;
// 		number_of_digits_in_n--;
// 	}
// 	answer[index] = '\0';
// 	printf("\nanswer = %s\n", answer);
// 	return (0);
// }

char *ft_itoa(int n)
{
	int index;
	int number_of_digits_in_n;
	char *answer;
	
	index = 0;
    if (n == 0) 
		return (ft_strdup("0")); 
	if (n == -2147483648)
        return (ft_strdup("-2147483648"));


	if (n < 0)
	{
		n = n * -1;
		number_of_digits_in_n = ft_calc_digits(n);
		answer = malloc(number_of_digits_in_n + 1 + 1);
		if (!answer)
			return(0);
		answer[index] = '-';
		index++;
	}
	else
	{
		number_of_digits_in_n = ft_calc_digits(n);
		answer = malloc(number_of_digits_in_n + 1);
		if (!answer)
			return(0);		
	}
	while (number_of_digits_in_n > 0)
	{
		int x  = n / ft_int2pwr(10, (number_of_digits_in_n - 1));
		int y = x % 10;
		answer[index] = y + '0';
		index++;
		number_of_digits_in_n--;
	}
	answer[index] = '\0';
	// printf("\nanswer = %s\n", answer);
	return (answer);
}

int main(void)
{
	char* test;
	test = ft_itoa(-12345);
	printf("\n%s\n", test);
	return(0);
}