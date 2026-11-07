/*#include <stdio.h>

void	print_number(int n)
{
	printf("%d\n", n);
}*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*int	main(void)
{
	int	tab[] = {5, 3, 4, 9, 7, 6};
	int	l;

	l = 6;
	ft_foreach(tab, l, print_number);
	return (0);
}*/
