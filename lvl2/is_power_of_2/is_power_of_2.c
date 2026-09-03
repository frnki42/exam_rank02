int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return (n == 1);
}
/*
#include <stdio.h>

int	main()
{
	int	n;

	n = 420;
	printf("is_power_of_2(%i) returns: %i\n", n, is_power_of_2(n));
}
*/
