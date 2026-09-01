#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	reps;

	while (*str)
	{
		reps = 1;
		if (*str >= 'A' && *str <= 'Z')
			reps = *str - 64;
		else if (*str >= 'a' && *str <= 'z')
			reps = *str - 96;
		while (reps--)
			write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
}
