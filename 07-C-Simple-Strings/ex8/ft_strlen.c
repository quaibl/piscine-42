/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 08:56:35 by mquaibl           #+#    #+#             */
/*   Updated: 2026/07/11 14:29:41 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>

int	main(void)
{
	char s[] = "gfegfh";

	printf("%d", ft_strlen(s));
	return (0);
}*/
