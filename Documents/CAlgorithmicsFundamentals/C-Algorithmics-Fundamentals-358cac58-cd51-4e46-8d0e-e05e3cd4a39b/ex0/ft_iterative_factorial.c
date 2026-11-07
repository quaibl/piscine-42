//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		i = nb * i;
		nb--;
	}
	return (i);
}

/*int	main(void)
{
	int	f;

	f = ft_iterative_factorial(5);
	printf("%d", f);
	return (0);
}*/
