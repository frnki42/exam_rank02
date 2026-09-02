int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	char	*s1;
	char	*s2;

	s1 = "test_me_please!";
	s2 = "test_me_please!";

	printf("ft_strcmp(s1, s2) returns: %i\n", ft_strcmp(s1, s2));
}
*/
