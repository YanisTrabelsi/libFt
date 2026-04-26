/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 00:39:10 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/25 01:24:07 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(str);
	while (i >= 0)
	{
		str = (char *)s + i;
		if (*str == c)
			return (str);
		--i;
	}
	return ("0");
}
/*
int	main(void)
{
	char	*str;
	int		c;

	str = "yo loukas, tu as pas de segfault
	aujourd'hui ?";
	c = 'z';
	str = ft_strrchr(str, c);
	printf("%s\n", str);
}*/
