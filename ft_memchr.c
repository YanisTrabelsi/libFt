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
	char	d;

	str = (char *)s;
	prev_str = str;
	d = (char)c;
	while (n > 0 && prev_str != 0)
	{
		if (*str == d)
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
	char	*s2;
	char	str[] = {0, 1, 2, 3, 4, 5};

	s = str;
	s2 = str;
	c = 258;
	n = 3;
	s2 = memchr(s, c, n);
	printf("memchr: %p\n", s2);
	s = ft_memchr(s, c, n);
	printf("ft_memchr: %p\n", s);
}*/
