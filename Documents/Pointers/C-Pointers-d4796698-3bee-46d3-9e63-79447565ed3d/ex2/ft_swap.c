void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	a = 5;
	b = 3;

	printf("Befor Swap\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_swap(&a, &b);
	printf("After Swap\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
	return (0);
}*/
