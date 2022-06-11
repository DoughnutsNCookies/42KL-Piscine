#include <unistd.h>
#include <stdio.h>
#include "ft_rev_int_tab.c"

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int test1[] = {1,2,3};
	int size = 4;
	ft_rev_int_tab(test1, size);

	for (int i = 0; i < size; i++)
		printf("%d,", test1[i]);
}
