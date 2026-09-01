#include <unistd.h>

int	get_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != ' ' && str[len] != '\t')
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	int	start;

	if (argc == 2)
	{
		start = 0;
		while (argv[1][start] == ' ' || argv[1][start] == '\t')
			start++;
		write(1, argv[1] + start, get_len(argv[1] + start));
	}
	write(1, "\n", 1);
}
