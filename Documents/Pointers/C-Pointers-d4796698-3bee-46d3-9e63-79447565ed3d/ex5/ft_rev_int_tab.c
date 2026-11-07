void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	tmp;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		tmp = tab[first];
		tab[first] = tab[last];
		tab[last] = tmp;
		first++;
		last--;
	}
}

/*#include <stdio.h>

int	main(int argc, char *argv)
{
	int tableau[] = {1, 6, 9, 5, 7};
	int taille;
	int i;

	taille = 5;
	i = 0;

	ft_rev_int_tab(tableau, taille);

		while (i < taille)
		{
		printf("%d  ", tableau[i]);
		i++;
		}

	return (0);
}*/
