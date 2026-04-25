/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 21:13:24 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/25 21:13:27 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		dif;
	char	*str1;
	char	*str2;

	dif = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (dif == 0 && n > 0)
	{
		dif = *str2++ - *str1++;
		--n;
	}
	return (dif);
}
/*
int	main(void)
{
	char s[] = {-128, 0, 127, 0};
	char s2[] = {-128, 0, 127, 0};

	printf("memcmp: %d\n", memcmp(s, s2, 4));
	printf("ft_memcmp: %d\n", ft_memcmp(s, s2, 4));
}*/
