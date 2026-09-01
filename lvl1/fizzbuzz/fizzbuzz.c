#include <unistd.h>

void print_num(int num)
{
	char	c;

	if (num > 9)
		print_num(num / 10);
	c = num % 10 + '0';
	write(1, &c, 1);
}

int	main()
{
	int	num;

	num = 0;
	while (++num < 101)
	{
		if (num % 3 == 0 && num % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (num % 3 == 0)
			write(1, "fizz", 4);
		else if (num % 5 == 0)
			write(1, "buzz", 4);
		else
			print_num(num);
		write(1, "\n", 1);
	}
}
