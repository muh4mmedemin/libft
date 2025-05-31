#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	d[] = "ABCDEFGHJ";
	char	e[] = "DHJ";
	char	*s;

	s = ft_strtrim(d, e);
	printf("%s", s);
}
