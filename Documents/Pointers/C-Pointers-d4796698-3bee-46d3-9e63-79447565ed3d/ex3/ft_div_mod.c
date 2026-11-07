void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 3;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d\n", div);
        printf("mod = %d\n", mod);
	return (0);
}*/
