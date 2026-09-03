#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	bytes;
	int		i;

	bytes = 0;
	while (s[bytes])
	{
		i = -1;
		while (accept[++i])
			if (s[bytes] == accept[i])
				break;
		if (!accept[i])
			return (bytes);
		bytes++;
	}
	return (bytes);
}
/*
#include <stdio.h>

int	main()
{
	char	*s;
	char	*accept;

	s = "012345789";
	accept = "01234";
	printf("ft_strspn(s, accept) returns: %li\n", ft_strspn(s, accept));
}
*/
