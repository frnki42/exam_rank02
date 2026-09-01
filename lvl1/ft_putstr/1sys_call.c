#include <unistd.h>

int	get_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, get_len(str));
}
/*
int	main()
{
	ft_putstr(".frnki on top!\n");
}
*/
