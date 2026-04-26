/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:57:19 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/22 13:57:19 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	while (*src++)
		++count;
	src -= count + 1;
	if (size > 0)
	{
		while (*src && size-- > 1)
			*dest++ = *src++;
		*dest = 0;
	}
	return (count);
}
/*
int	main(int argc, char **argv)
{
	char	dest[10] = "AAAAAAAAAA";
	char	src[] = "coucou";
	size_t	lenStringH;
	char	dest1[10] = "AAAAAAAAAA";
	char	src1[] = "coucou";
	size_t	len;

	(void)argc;
	(void)argv;
	lenStringH = strlcpy(dest, src, 0);
	printf("string.h dest : %s\n", dest);
	printf("string.h len : %ld\n\n", lenStringH);
	len = ft_strlcpy(dest1, src1, 0);
	printf("dest : %s\n", dest1);
	printf("len : %ld\n", len);
	return (0);
}*/
