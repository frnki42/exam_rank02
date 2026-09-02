#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int		i;
	char	*ptr;

	ptr = (char *)s1;
	while (*ptr)
	{
		i = -1;
		while (s2[++i])
			if (*ptr == s2[i])
				return (ptr);
		ptr++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	char	*s1;
	char	*s2;

	s1 = "abcdefghijklmnopqrstuvwxyz";
	s2 = "0123456789";

	printf("ft_strbpbrk(s1, s2) returns: %s\n", ft_strpbrk(s1, s2));
}
*/
