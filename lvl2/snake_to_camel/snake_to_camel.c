#include <unistd.h>

void	snake_to_camel(char *str)
{
	char	c;

	while (*str)
	{
		if (*str == '_')
		{
			str++;
			if (!*str)
				break ;
			if (*str >= 'a' && *str <= 'z')
				c = *str - 32;
			else
				c = *str;
		}
		else
			c = *str;
		write(1, &c, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	write(1, "\n", 1);
}
