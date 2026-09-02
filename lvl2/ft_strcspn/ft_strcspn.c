#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int bytes;

	bytes = 0;
	while (s[bytes])
	{
		i = 0;
		while (reject[i])
		{
			if (s[bytes] == reject[i])
				return (bytes);
			i++;
		}
		bytes++;
	}
	return (bytes);
}
/*
#include <stdio.h>

int	main()
{
	char	*s;
	char	*reject;

	s = "test_me_please .frnki on top!";
	reject = "a";
	printf("ft_strcspn(s, reject) returns: %li\n", ft_strcspn(s, reject));
}
*/
