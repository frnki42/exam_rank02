void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>
int	main()
{
	int	a;
	int	b;

	a = 42;
	b = 420;
	printf("first: a = %i | b = %i\n", a, b);
	ft_swap(&a, &b);
	printf("second: a = %i | b = %i\n", a, b);
}
*/
