int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		result = result * 10 + (*str - 48);
		str++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main()
{
	char	*str;

	str = "420";
	printf("result of ft_atoi(%s) = %i\n", str, ft_atoi(str));
}
*/
