int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	if (length <= 1)
		return (1);
	asc = 1;
	desc = 1;
	i = 0;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) > 0)
			asc = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			desc = 0;
		i++;
	}
	return (asc || desc);
}

/*int	cmp(int a, int b)
{
	if (a < b)
		return (-1);
	if (a > b)
		return (1);
	else
		return (0);
}

#include <stdio.h>

int	main(void)
{
	int	(*f)(int a, int b);
	int	array[4] = {1, 2, 3, 5};

	f = cmp;
	printf("%d\n", ft_is_sort(array, 4, f));
	return (0);
}*/
