char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] = s2[i]))
		i++;
	return (s1);
}
/*
#include <stdio.h>

int	main()
{
	char	dest[5];
	char	*src = "test";

	printf("%s\n", ft_strcpy(dest, src));
}
*/
