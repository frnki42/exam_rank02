int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
#include <stdio.h>

int	main()
{
	char	*str;

	str = "123456789";
	printf("length of %s is %i\n", str, ft_strlen(str));
}
*/
