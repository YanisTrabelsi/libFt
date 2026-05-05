/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 03:16:34 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/25 04:13:03 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	res;

	res = 0;
	if (n == 0)
		return (0);
	if (n > 0)
	{
		while (n > 1 && *s1 && *s1 == *s2)
		{
			s1++;
			s2++;
			--n;
		}
		res = (unsigned char)*s1 - (unsigned char)*s2;
	}
	return (res);
}
/*
int	main(void)
{
	size_t	n;
	int		res;
	int		res2;
	char	s1[] = "test";
	char	s2[3];


	s2 = -128;
	n = 5;
	res = strncmp(s1, s2, n);
	res2 = ft_strncmp(s1, s2, n);
	printf("strncmp : %d\nft_strncmp : %d\n", res, res2);
	return (0);
}*/
