/*
** Move the pointer to the first element that IS NOT a whitespace
** The first element that IS NOT a whitespace may be a single '+' or '-'.
** If this is the case move the pointer over one place to the right.
*/

int	ft_atoi(const char *str)
{
	int i;

	i = 0;

	while (isspace(str[i]))
	{
		i++;
	}

	while ((str[i] == '-') || (str[i] == '+'))
	{
		i++;
	}
}

int main (void)
{
	return (0);
}