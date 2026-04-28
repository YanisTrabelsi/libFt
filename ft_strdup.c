/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:16:35 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/27 20:16:41 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*dup;

	len = ft_strlen((char *)s);
	i = 0;
	dup = malloc(len + 1);
	while (s[i])
	{
		dup[i] = s[i];
		++i;
	}
	dup[i] = 0;
	return (dup);
}
/*
int main()
{
	char *str = "hello Louka";
	char *ptr;

	ptr = ft_strdup(str);
	printf("%s\n", ptr);
	return (0);
}*/
