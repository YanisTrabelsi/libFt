/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:28:13 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/25 00:51:14 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	*prev_str;
	char	check;

	check = 0;
	str = (char *)s;
	prev_str = str;
	while (check == 0 || *prev_str != 0)
	{
		check = 1;
		if (*str == (char)c)
			return (str);
		++str;
		prev_str = str - 1;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str;
	int		c;

	str = "Yo Louka tu reviens dimanche";
	c = 't' + 256;
	char *str1 = ft_strchr(str, c);
	char *str2 = strchr(str, c);
	printf("strchr: %p\nft_strchr: %p\n", str2, str1);
}*/
