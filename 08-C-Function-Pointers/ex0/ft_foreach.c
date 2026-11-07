/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 14:28:02 by mquaibl           #+#    #+#             */
/*   Updated: 2026/07/15 15:05:40 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
