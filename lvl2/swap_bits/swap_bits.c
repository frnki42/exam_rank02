unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}
/*
#include <stdio.h>

int	main()
{
	unsigned char	octet;

	octet = 1;
	printf("%i after swap_bits = %i", octet, swap_bits(octet));
}
*/
