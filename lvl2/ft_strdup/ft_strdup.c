#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i])
		i++;
	dup = malloc(i + 1);
	if (!dup)
		return (NULL);
	dup[i] = '\0';
	while (i--)
		dup[i] = src[i];
	return (dup);
}
/*
#include <stdio.h>

int	main()
{
	char	*str;
	char	*dup;

	str = "test_me_please! .frnki on top!";
	dup = ft_strdup(str);
	printf("ft_strdup(str) returns: %s\n", dup);
	free(dup);
}
*/
