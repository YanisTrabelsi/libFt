/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:43:55 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/22 17:43:55 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lib.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			count;
	unsigned long	dstlen;

	count = 0;
	dstlen = ft_strlen(dst);
	while (*src++)
		++count;
	src -= count + 1;
	if (size < dstlen)
		return (size + count);
	while (*dst)
	{
		++count;
		--size;
		++dst;
	}
	while (*src && size-- > 1)
		*dst++ = *src++;
	*dst = 0;
	return (count);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char dst[10] = "wesh";
	char src[] = "12345";
	printf("string.h src before : %s\n", src);
	size_t lenStringH = strlcat(dst, src, 7); 
	printf("string.h src after : %s\n", src);
	printf("string.h dest : %s\n", dst);
	printf("\nstring.h len : %ld\n\n", lenStringH);
	char dst1[10] = "wesh";
	char src1[] = "12345";
	printf("src before : %s\n", src1);
	size_t len = ft_strlcat(dst1, src1, 7);
	printf("src after : %s\n", src1);
	printf("dst : %s\n", dst1);
	printf("\nlen : %ld\n", len);
	return 0;
}*/
