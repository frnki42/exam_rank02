#include <unistd.h>

void	rot_13(char *str)
{
	char	c;

	while (*str)
	{
		if ((*str >= 'N' && *str <= 'Z') || (*str >= 'n' && *str <= 'z'))
			c = *str - 13;
		else if ((*str >= 'A' && *str <= 'M') || (*str >= 'a' && *str <= 'm'))
			c = *str + 13;
		else
			c = *str;
		write(1, &c, 1);
		str++;
	}
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
}
*/
