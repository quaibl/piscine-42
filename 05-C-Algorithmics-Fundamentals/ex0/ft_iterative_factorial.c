/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:55:00 by mquaibl           #+#    #+#             */
/*   Updated: 2026/07/05 15:11:09 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		i = nb * i;
		nb--;
	}
	return (i);
}

/*int	main(void)
{
	int	f;

	f = ft_iterative_factorial(5);
	printf("%d", f);
	return (0);
}*/
