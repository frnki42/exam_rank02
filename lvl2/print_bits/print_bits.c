#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		i;
	int		bit;
	char	c;

	i = 8;
	while (--i >= 0)
	{
		bit = (octet >> i) & 1;
		c = bit + 48;
		write(1, &c, 1);
	}
}
/*
int	main()
{
	unsigned char	octet;

	octet = 1;
	print_bits(octet);
}
*/
