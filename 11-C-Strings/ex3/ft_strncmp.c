/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 13:50:11 by mquaibl           #+#    #+#             */
/*   Updated: 2026/07/23 11:27:55 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("abc", "abc", 3)); // 0
printf("%d\n", ft_strncmp("abc", "abd", 3)); // negative
printf("%d\n", ft_strncmp("abd", "abc", 3)); // positive
printf("%d\n", ft_strncmp("abc", "abcdef", 3)); // 0
printf("%d\n", ft_strncmp("abc", "abcdef", 4)); // negative

		return (0);
}*/
