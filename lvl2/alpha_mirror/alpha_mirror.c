#include <unistd.h>

void	alpha_mirror(char *str)
{
	char	c;

	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			c = 'A' + 'Z' - *str;
		else if (*str >= 'a' && *str <= 'z')
			c = 'a' + 'z' - *str;
		else
			c = *str;
		write(1, &c, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
}
