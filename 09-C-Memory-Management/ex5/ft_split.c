/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquaibl <mquaibl@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:18:29 by mquaibl           #+#    #+#             */
/*   Updated: 2026/07/20 14:19:18 by mquaibl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str)
		{
			count++;
			while (*str && !is_sep(*str, charset))
				str++;
		}
	}
	return (count);
}

char	*alloc_word(char *str, char *charset)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && !is_sep(str[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;

	i = 0;
	result = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!result)
		return (NULL);
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str)
		{
			result[i] = alloc_word(str, charset);
			if (!result[i])
				return (NULL);
			i++;
			while (*str && !is_sep(*str, charset))
				str++;
		}
	}
	result[i] = NULL;
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("Hello,,42;Piscine:School", ",;:");
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/
