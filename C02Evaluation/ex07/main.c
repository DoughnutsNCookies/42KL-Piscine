#include <unistd.h>
#include <stdio.h>
#include "ft_strupcase.c"

char	*ft_strupcase(char *str);

int	main(void)
{
	char test1[] = "abcde";
	char test2[] = " abc ";
	char test3[] = "a b c";
	char test4[] = "aBc";
	char test5[] = "12a34";
	char test6[] = "";
	printf("%s\n", ft_strupcase(test1));
	printf("%s\n", ft_strupcase(test2));
	printf("%s\n", ft_strupcase(test3));
	printf("%s\n", ft_strupcase(test4));
	printf("%s\n", ft_strupcase(test5));
	printf("%s\n", ft_strupcase(test6));
}
