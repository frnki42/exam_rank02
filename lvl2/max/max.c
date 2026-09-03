int	max(int* tab, unsigned int len)
{
	int	num;
	unsigned int	i;

	if (len == 0)
		return (0);
	num = tab[0];
	i = -1;
	while (++i < len)
	{
		if (num < tab[i])
			num = tab[i];
	}
	return (num);
}

#include <stdio.h>

int	main()
{
	int	tab[] = {-213, -420, -13, 18};
	int	len = 4;
	
	printf("max(tab, len) returns: %i\n", max(tab, len));
}
