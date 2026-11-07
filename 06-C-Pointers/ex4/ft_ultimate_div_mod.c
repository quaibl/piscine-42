/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 09:38:04 by mquaibl           #+#    #+#             */
/*   Updated: 2026/07/08 16:54:43 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

/*#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	a = 10;
	b = 3;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("div = %d\n", a);
	printf("mod = %d\n", b);
	return (0);
}*/
