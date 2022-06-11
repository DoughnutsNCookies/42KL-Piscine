#include <stdio.h>
int	main(void)
{
	int	swapped;
	int	ok;

	ok = 1;
	swapped = 0;
	while (!swapped)
	{
		swapped = 0;
		if (ok == 1)
			swapped = 1;
		printf("OK");
		swapped = 1;
	}
}
