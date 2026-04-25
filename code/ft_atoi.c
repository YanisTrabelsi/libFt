/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 04:16:39 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/25 05:07:50 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	s;
	int	res;

	s = 1;
	res = 0;
	while (*nptr == ' ')
		++nptr;
	if (*nptr == '-' || *nptr == '+')
		s = 44 - *nptr++;
	else if (ft_isdigit(*nptr) == 0)
		return (res);
	while (*nptr >= '0' && *nptr <= '9')
		res = res * 10 + (*nptr++ - 48) * s;
	return (res);
}
/*
int	main(void)
{
	char	*c;
	int		res;
	int		res2;

	c = "-2147483649";
	res = ft_atoi(c);
	res2 = atoi(c);
	printf("ft_atoi : %d\natoi : %d\n", res, res2);
	return (0);
}*/
