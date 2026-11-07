/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 14:35:36 by mquaibl           #+#    #+#             */
/*   Updated: 2026/07/20 13:58:40 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	length;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	length = max - min;
	result = malloc(sizeof(int) * length);
	if (result == NULL)
		return (NULL);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	int	*r;

	int min, max, i;
	min = 5;
	max = 10;
	i = 0;
	r = ft_range(min, max);
	printf("Min included : %d\n", min);
	while (i < max - min)
	{
		printf("%d  ", r[i]);
		i++;
	}
	printf("\nMax excluded : %d\n", max);
	free(r);
	r = 0;
	return (0);
}*/
