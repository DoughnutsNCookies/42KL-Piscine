#include <stdio.h>
#include "ft_ultimate_range.c"

int	main(void)
{
	int* res = NULL;
	int i;
	int size;
	
	size = ft_ultimate_range(&res, 5, 10);
	printf("is_null? %d\n", res == NULL);
	printf("size is %i\n", size);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");
	
	res = NULL;
	size = ft_ultimate_range(&res, -20, -17);
	printf("is_null? %d\n", res == NULL);
	printf("size is %i\n", size);
	for (i = 0; i < 3; i++)
		printf("%d,", res[i]);
	printf("\n");
	
	res = (int*)1;
	size = ft_ultimate_range(&res, 10, 5);
	printf("is_null? %d\n", res == NULL);
	printf("size is %i\n", size);
}
