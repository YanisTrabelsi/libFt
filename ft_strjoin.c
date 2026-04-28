/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:49:12 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/28 15:49:19 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinstr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	joinstr = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	while (s1[i])
	{
		joinstr[i] = s1[i];
		++i;
	}
	while (s2[j])
	{
		joinstr[i] = s2[j];
		++j;
		++i;
	}
	joinstr[i] = 0;
	return (joinstr);
}
/*
#include <stdio.h>
int main()
{
	char *s = ft_strjoin("tripouille", "42");
	printf("%s\n", s);
	return 0;
}*/
