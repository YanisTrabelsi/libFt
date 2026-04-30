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

int	words_count(char *s, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] == sep)
		++i;
	while (s[i])
	{
		if (s[i] == sep && s[i - 1] != sep)
			++count;
		++i;
	}
	if (s[i - 1] != sep)
		++count;
	return (count);
}

//void	write_words(char *str, char sep, char **arr_str, int words_count)
//{
//}

char	**ft_split(char const *s, char c)
{
	char	**arr_str;
	int		msize;

	msize = words_count((char *)s, c) + 1;
	arr_str = malloc(sizeof(char *) * msize);
	printf("%p\n", arr_str);
	printf("%d\n", msize - 1);
	arr_str[msize - 1] = NULL;
	printf("Null value");
//	write_words((char *)s, c, arr_str, msize - 1);
	printf("%p\n", arr_str);
	return (arr_str);
}

int	main(void)
{
	char	**arr_str;
	int		i;

	i = 0;
	arr_str = ft_split("Bonjour les haricots", ' ');
	while (arr_str[i])
		printf("||%s||\n", arr_str[i++]);
	return (0);
}
