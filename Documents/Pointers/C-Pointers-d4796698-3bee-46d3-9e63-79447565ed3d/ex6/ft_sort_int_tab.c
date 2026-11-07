void	ft_sort_int_tab(int *tab, int size)
{
	int	first;
	int	second;
	int	tmp;

	first = 0;
	while (first < size)
	{
		second = first + 1;
		while (second < size)
		{
			if (tab[first] > tab[second])
			{
				tmp = tab[first];
				tab[first] = tab[second];
				tab[second] = tmp;
			}
			second++;
		}
		first++;
	}
}

/*#include <stdio.h>

int main(void)
{
	int tableau [] = {4, 1, 5, 3, 2};
	int taille = 5;
	int i = 0;
	

	ft_sort_int_tab(tableau, taille);

	while (i < taille)
	{
		printf("%d ", tableau[i]);
		i++;
	}
	return (0);
}*/
