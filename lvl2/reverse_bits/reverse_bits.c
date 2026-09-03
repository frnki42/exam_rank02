unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				i;

	result = 0;
	i = -1;
	while (++i < 8)
	{
		result = result << 1;
		result = result | (octet & 1);
		octet = octet >> 1;
	}
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	printf("reverse_bits() returns: %i\n", reverse_bits(255));
}
*/

