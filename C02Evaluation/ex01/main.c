#include <unistd.h>
#include <stdio.h>
#include "ft_strncpy.c"

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char test1[] = "asdfaowbfoiawbf";
	char test2[] = "asdf";
	char test3[] = "asdf";
	printf("%p\n", test1));
	printf("%p\n", test2));
	printf("%s, end\n", ft_strncpy(test2, test1, 5));
	printf("%s, src", test1));
	printf("%s, end\n", ft_strncpy(test2, "qwerty", 4));
	printf("%s, end\n", ft_strncpy(test3, "42", 10));

}
