/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 14:04:55 by mquaibl           #+#    #+#             */
/*   Updated: 2026/07/23 11:29:07 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	dest[50] = "Hello";
	char	*src;

	src = " my friends";
	printf(".%s.\n", ft_strcat(dest, src));
	printf(".%s.\n", ft_strcat(dest, src));
}*/
