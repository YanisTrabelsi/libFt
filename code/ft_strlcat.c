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
strlcat(char *dst, const char *src, size_t size);
{
	q
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char dest[10];
	char src[] = "wesh";
	printf("string.h src before : %s\n", src);
	size_t lenStringH = strlcat(dest, src, 7); 
	printf("string.h src after : %s\n", src);
	printf("string.h dest : %s\n", dest);
	printf("\nstring.h len : %ld\n\n", lenStringH);
	char dest1[10];
	char src1[] = "wesh";
	printf("src before : %s\n", src1);
	size_t len = strlcpy(dest1, src1, 7);
	printf("src after : %s\n", src1);
	printf("dest : %s\n", dest1);
	printf("\nlen : %ld\n", len);
	return 0;
}

