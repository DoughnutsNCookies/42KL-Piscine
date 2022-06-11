#include "ft_strdup.c"
#include <stdio.h>

int	main(void)
{
	char* str;
	char* res;
	str = "asdf";
	res = ft_strdup(str);
	printf("%d, '%s' vs '%s'\n", res != str, res, str);
	str = "", res = ft_strdup(str);
	printf("%d, '%s' vs '%s'\n", res != str, res, str);
	str = "hello world!", res = ft_strdup(str);
	printf("%d, '%s' vs '%s'\n", res != str, res, str);
}
