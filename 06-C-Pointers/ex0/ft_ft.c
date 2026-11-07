/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 13:58:08 by mquaibl           #+#    #+#             */
/*   Updated: 2026/07/08 16:40:13 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/* #include <unistd.h>


	void	ft_putchar(char c)
	{
		write(1, &c, 1);
	}

	void	ft_putnbr(int nbr)
	{
		if(nbr >= 10)
			ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
		
	
	}

int	main(void)
{
	int a;

	ft_ft(&a);
	ft_putnbr(a);
	return (0);
}*/
