/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 22:23:59 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/25 22:24:42 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	j;
	int	i;
	int	k;

	j = 0;
	i = 0;
	k = 0;
	if (*little == 0)
		return ((char *)big);
	while (len > 0 && big[i])
	{
		while (len > 0 && big[i] == little[j])
		{
			++i;
			++j;
			if (little[j] == 0)
				return ((char *)&big[i] - j);
			--len;
		}
		len += j;
		i = ++k;
		j = 0;
		--len;
	}
	return (0);
}
/*
int	main(void)
{
	char	big[30] = "aaabcabc";

	printf("big + 1: %p\n", big + 1);
	printf("ft_strnstr: %p\n", ft_strnstr(big, "", 8));
	return (0);
}*/
