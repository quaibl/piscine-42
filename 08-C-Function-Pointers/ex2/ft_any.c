/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:38:50 by mquaibl           #+#    #+#             */
/*   Updated: 2026/07/15 16:18:05 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	is_empty(char *str)
{
	return (str[0] == '\0');
}*/

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	*tab1[] = {"Hello", "World", "", "42", NULL};
	char	*tab2[] = {"Hello", "World", "42", NULL};

	printf("tab1: %d\n", ft_any(tab1, is_empty));
	printf("tab2: %d\n", ft_any(tab2, is_empty));
	return (0);
}*/
