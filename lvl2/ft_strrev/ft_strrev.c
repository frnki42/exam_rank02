char	*ft_strrev(char *str)
{
	int		start;
	int		end;
	char	tmp;

	start = 0;
	end = 0;
	while (str[end])
		end++;
	end--;
	while (end > start)
	{
		tmp = str[end];
		str[end] = str[start];
		str[start] = tmp;
		end--;
		start++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char	str[] = "0123456789";
	printf("%s\n", ft_strrev(str));
}
*/
