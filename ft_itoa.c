#include "libft.h"

void	ft_rev_int_tab(char *tab, int size)
{
	int counter;
	int reverse_counter;
	char temp;

	counter = 0;
	reverse_counter = size - 1;
	while (counter < (size / 2))
	{
		temp = tab[counter];
		tab[counter] = tab[reverse_counter];
		tab[reverse_counter] = temp;
		counter++;
		reverse_counter--;
	}
}

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

// char	*ft_itoa(int n)
// {
// 	int is_n_negative; // Flag
// 	int size; // size of entire string to be malloced
// 	char c;
// 	char *answer; // string to be returned
// 	int index;

// 	is_n_negative = 0;
// 	size = 0;
// 	index = 0;
// 	if (n == 0)
// 		return (ft_strdup("0"));
// 	if (n == -2147483648)
// 		return (ft_strdup("-2147483648"));
// 	if (n < 0)
// 	{
// 		n = n * -1;
// 		is_n_negative = 1;
// 		size++;
// 	}
// 	size = size + ft_calc_digits(n);
// 	answer = malloc(size);
// 	if (!answer)
// 		return (0);
// 	while (n > 0)
// 	{
// 		c = (n % 10) + '0';
// 		answer[index] = c;
// 		index++;
// 		n = n / 10;
// 	}
// 	if (is_n_negative)
// 	{
// 		answer[index] = '-';
// 		index++;
// 	}
// 	answer[index] = '\0';
// 	ft_rev_int_tab(answer, size);
// 	return (answer);
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

// int main(void)
// {
// 	char* test;
// 	test = ft_itoa(-12345);
// 	printf("\n%s\n", test);
// 	return(0);
// }