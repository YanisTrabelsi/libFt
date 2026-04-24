/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:28:13 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/24 19:28:18 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

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
		if (*str == c)
			return (str);
		++str;
		prev_str = str - 1;
		printf("#\n");
	}
	return (0);
}
/*
int	main(void)
{
	char	*str;
	char	c;

	str = "Yo Louka tu reviens dimanche";
	c = 'z';
	str = ft_strchr(str, c);
}*/
