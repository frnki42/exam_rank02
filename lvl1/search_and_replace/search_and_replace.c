#include <unistd.h>

void	search_and_replace(char *str, char tar, char repl)
{
	while (*str)
	{
		if (*str == tar)
			*str = repl;
		write(1, str, 1);
		str++;
	}
}

int	is_single_char(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	if (len != 1)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 4 && is_single_char(argv[2]) && is_single_char(argv[3]))
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
}
