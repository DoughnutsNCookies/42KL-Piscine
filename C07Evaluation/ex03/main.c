#include <stdio.h>
#include "ft_strjoin.c"

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char    *tab[5];
    tab[0] = "test1";
    tab[1] = "     hello  \n   ";
    tab[2] = " world ";
    tab[3] = "ok1 ok2 ok3 ok4 ok5";
	tab[4] = "should not print";
    printf("%s", ft_strjoin(4, tab, "fuckyou"));

    return (0);
}
