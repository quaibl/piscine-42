//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 1;
	j = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > i)
	{
		nb = nb * j;
		i++;
	}
	return (nb);
}

/*int	main(void)
{
	int	f;

	f = ft_iterative_power(2, 5);
	printf("%d", f);
	return (0);
}*/
