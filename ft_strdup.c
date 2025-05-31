#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		srcsize;
	char	*newstr;

	srcsize = 0;
	while (s[srcsize])
		srcsize++;
	newstr = malloc(srcsize + 1);
	srcsize = 0;
	while (s[srcsize])
	{
		newstr[srcsize] = s[srcsize];
		srcsize++;	
	}
	newstr[srcsize] = '\0';
	return (newstr);
}
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_strdup("ABCSDAWSDAD");
	printf("%s", str);
}
