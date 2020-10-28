#include <string.h>
#include <stdio.h>

char * ft_strchr(const char *s, int c);

// int main(int argc, char const *argv[])
// {
//     const char *s = "Hello, World!";
//     int c = 'o';
//     printf("\nEchte strchr(): %c\n", *strchr(s, c));
//     // Segmentation fault when trying to printf Null. If a match is not found.
//     printf("\nNeppe ft_strchr(): %c\n", *ft_strchr(s, c));
//     return 0;
// }


// int main()
// {
// 	const char str[] = "http://www.tutorialspoint.com";
// 	const char ch = 'z';

// 	char *ret;
// 	ret = strchr(str, ch);
// 	printf("String after |%c| is - |%s|\n", ch, ret);

// 	char *ret_twee;
// 	ret_twee = ft_strchr(str, ch);
// 	printf("String after |%c| is - |%s|\n", ch, ret_twee);

// 	return (0);
// }


// int main()
// {
// 	const char str[] = "http://www.tutorialspoint.com";
// 	const char tests[4] = {'a', '.', 'z', '\0'};

// 	char *ret;
// 	int i = 0;
// 	while (i < 4)
// 	{
// 		ret = strchr(str, tests[i]);
// 		printf("String after |%c| is - |%s|\n", tests[i], ret);
// 		i++;
// 	}

// 	printf("\n");

// 	char *ret_twee;
// 	int j = 0;
// 	while (j < 4)
// 	{
// 		ret_twee = ft_strchr(str, tests[j]);
// 		printf("String after |%c| is - |%s|\n", tests[j], ret_twee);
// 		j++;
// 	}

// 	return (0);
// }


void test(const char str[], const char tests[], char *(*f)(const char *s, int c))
{
	char *ret;
	int i = 0;
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

	test(str, tests, strchr);
	test(str, tests, ft_strchr);

	return (0);
}
