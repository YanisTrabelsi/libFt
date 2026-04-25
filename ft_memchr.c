/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:24:02 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/25 17:24:07 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	*prev_str;

	str = (char *)s;
	prev_str = str;
	while (n > 0 && prev_str != 0)
	{
		if (*str == c)
			return (str);
		++str;
		--n;
		prev_str = str - 1;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s;
	int		c;
	size_t	n;
	char	*str;
	char	*s2;

	str = "";
	s = str;
	s2 = str;
	c = 'u';
	n = 1;
	s2 = memchr(s, c, n);
	printf("memchr: %p\n", s2);
	s = ft_memchr(s, c, n);
	printf("ft_memchr: %p\n", s);
}*/
