/*
** Move the pointer to the first element that IS NOT a whitespace
** The first element that IS NOT a whitespace may be a single '+' or '-'.
** If this is the case move the pointer over one place to the right.
*/

int	ft_atoi(const char *str)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (isspace(str[i]))
	{
		i++;
	}

	while ((str[i] == '-') || (str[i] == '+'))
	{
		i++;
	}

	while (isdigit(str[i]))
	{
		a = (a * 10) + str[i]; // convert str[i] van char naar int!
		i++;
	}
	
}

int main (void)
{
	return (0);
}