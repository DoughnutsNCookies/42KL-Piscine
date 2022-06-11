#include <stdio.h>
#include "ft_sqrt.c"

int	ft_sqrt(int index);

int	main(void)
{
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(144));
}
