#include <unistd.h>
#include <stdio.h>
#include "ft_strcapitalize.c"

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char test1[] = "aBcDe";
	char test2[] = "qwerTY qwerTY";
	char test3[] = "qwerty-qwerty";
	char test4[] = "tHis iS 100MARKS";
	char test5[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char test6[] = "";
	printf("%s\n", ft_strcapitalize(test1));
	printf("%s\n", ft_strcapitalize(test2));
	printf("%s\n", ft_strcapitalize(test3));
	printf("%s\n", ft_strcapitalize(test4));
	printf("%s\n", ft_strcapitalize(test5));
	printf("%s\n", ft_strcapitalize(test6));
}
