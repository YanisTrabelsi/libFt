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
#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t			count;

	count = 0;
	while (*src++)
		++count;
	src -= count + 1;
	while (*src && size-- > 1)
		*dest++ = *src++;
	*dest = 0;
	return (count);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char dest[10];
	char src[] = "wesh louka pas de segfault";
	printf("string.h src before : %s\n", src);
	size_t lenStringH = strlcpy(dest, src, 7); 
	printf("string.h src after : %s\n", src);
	printf("string.h dest : %s\n", dest);
	printf("\nstring.h len : %ld\n\n", lenStringH);
	char dest1[10];
	char src1[] = "wesh louka pas de segfault";
	printf("src before : %s\n", src1);
	size_t len = ft_strlcpy(dest1, src1, 7);
	printf("src after : %s\n", src1);
	printf("dest : %s\n", dest1);
	printf("\nlen : %ld\n", len);
	return 0;
}*/
