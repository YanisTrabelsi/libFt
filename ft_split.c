/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:56:09 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/30 16:56:15 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	words_count(char *str, char sep)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (str[i] && str[i] != sep)
		++count;
	while (str[i])
	{
		if (str[i] == sep && str[i + 1] != sep && str[i + 1])
			++count;
		++i;
	}
	return (count);
}

void	word_alloc(char **tab, char *str, char sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i] == sep)
		++i;
	while (str[i])
	{
		j = i;
		while (str[i] && str[i] != sep)
			++i;
		tab[k++] = malloc(i - j + 1);
		while (str[i] && str[i] == sep)
			++i;
	}
	tab[k] = 0;
}

void	write_word(char **tab, char *str, char sep)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	k = 0;
	l = 0;
	while (str[i] == sep)
		++i;
	while (str[i])
	{
		j = i;
		while (str[i] && str[i] != sep)
			++i;
		while (j < i)
			tab[l][k++] = str[j++];
		tab[l++][k] = '\0';
		k = 0;
		while (str[i] && str[i] == sep)
			++i;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = words_count((char *)s, c);
	if (*s)
		tab = malloc(sizeof(char *) * (word_count + 1));
	else
	{
		tab = malloc(sizeof(char *) * 1);
		tab[0] = 0;
		return (tab);
	}
	word_alloc(tab, (char *)s, c);
	write_word(tab, (char *)s, c);
	return (tab);
}
/*
int	main(void)
{
	char	**tab;

	tab = ft_split("", ' ');
	printf("%s\n", tab[5]);
	return (0);
}*/
