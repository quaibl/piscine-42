/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 11:34:37 by mquaibl           #+#    #+#             */
/*   Updated: 2026/07/20 19:27:48 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	*range = arr;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	int* arr;
	int i;

	i = 0;
	arr = (int*)malloc(sizeof(int) * 10);
	ft_ultimate_range(&arr, -5, 5);
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}*/
