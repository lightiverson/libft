#include <stdio.h>
#include <string.h>

char* ft_strrchr(const char *s, int c);

// int main()
// {
// 	const char str[] = "http://www.tutorialspoint.com";
// 	const char ch = 'z';

// 	char *ret;
// 	ret = strrchr(str, ch);
// 	printf("String after |%c| is - |%s|\n", ch, ret);


// 	char *retTwee;
// 	retTwee = ft_strrchr(str, ch);
// 	printf("String after |%c| is - |%s|\n", ch, retTwee);

// 	return (0);
// }

void test(const char str[], const char tests[], char *(*f)(const char *s, int c))
{
	int i = 0;
	char *ret;
	while (i < 4)
	{
		ret = (*f)(str, tests[i]);
		printf("String after |%c| is - |%s|\n", tests[i], ret);
		i++;
	}
	printf("\n");
}

int main()
{
	const char str[] = "http://www.tutorialspoint.com";
	const char tests[4] = {'a', '.', 'z', '\0'};

	test(str, tests, strrchr);
	test(str, tests, ft_strrchr);

	return (0);
}