//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}

/*int	main(void)
{
	int	f;

	f = ft_recursive_power(5, -1);
	printf("%d", f);
}*/
