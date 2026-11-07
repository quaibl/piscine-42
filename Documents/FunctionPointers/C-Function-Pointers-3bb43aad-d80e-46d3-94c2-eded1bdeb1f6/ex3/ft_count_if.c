/*int	find_a(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}*/

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

/*#include <stdio.h>

int	main(void)
{
	char	*arr[] = {"car", "sad", "dog", "green", "far"};

	printf("%d", ft_count_if(arr, 5, find_a));
	return (0);
}*/
