/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 13:44:02 by mquaibl           #+#    #+#             */
/*   Updated: 2026/07/03 11:19:54 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb > 0 && nb <= 9)
	{
		ft_putchar((nb % 10) + '0');
	}
}

/*
int	main(void)
{
	ft_putnbr(0);
	ft_putchar(' ');
	ft_putnbr(-1);
	ft_putchar(' ');
	ft_putnbr(2147483647);
	ft_putchar(' ');
	ft_putnbr(-2147483648);
	ft_putchar(' ');
	return (0);
}
*/
