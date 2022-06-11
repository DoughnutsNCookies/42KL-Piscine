#include <unistd.h>
#include <stdio.h>
#include "ft_strlowcase.c"

char	*ft_strlowcase(char *str);

int	main(void)
{
	char test1[] = "ABCDE";
	char test2[] = " ABC ";
	char test3[] = "A B C";
	char test4[] = "AbC";
	char test5[] = "12A34";
	char test6[] = "";
	printf("%s\n", ft_strlowcase(test1));
	printf("%s\n", ft_strlowcase(test2));
	printf("%s\n", ft_strlowcase(test3));
	printf("%s\n", ft_strlowcase(test4));
	printf("%s\n", ft_strlowcase(test5));
	printf("%s\n", ft_strlowcase(test6));
}
