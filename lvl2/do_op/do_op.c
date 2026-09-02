#include <stdlib.h>
#include <stdio.h>

void	do_op(char *n1, char op, char *n2)
{
	if (op == '+')
		printf("%i", atoi(n1) + atoi(n2));
	else if (op == '-')
		printf("%i", atoi(n1) - atoi(n2));
	else if (op == '*')
		printf("%i", atoi(n1) * atoi(n2));
	else if (op == '/')
		printf("%i", atoi(n1) / atoi(n2));
	else if (op == '%')
		printf("%i", atoi(n1) % atoi(n2));
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2][0], argv[3]);
	printf("\n");
}
