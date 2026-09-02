#include <stdlib.h>
#include <unistd.h>

int	get_snake_len(char *str)
{
	int	snake_len;

	snake_len = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			snake_len++;
		snake_len++;
		str++;
	}
	return (snake_len);
}

void	camel_to_snake(char *str)
{
	char	*snake_case;
	int		snake_len;
	int		i;
	int		k;

	snake_len = get_snake_len(str);
	snake_case = malloc(snake_len + 1);
	if (!snake_case)
		return ;
	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			snake_case[i + k] = '_';
			k++;
			snake_case[i + k] = str[i] + 32;
		}
		else
			snake_case[i + k] = str[i];
		i++;
	}
	snake_case[i + k] = '\0';
	write(1, snake_case, snake_len);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	write(1, "\n", 1);
}
