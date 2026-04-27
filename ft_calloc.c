/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 08:34:31 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/27 16:32:25 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size * count > (size_t)-1 / count)
		return (NULL);
	size *= count;
	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
/*
void print_test(int *ptr1, int *ptr2, int count)
{
		int	i;

		i = count;
	while (i > 0)
	{
		printf("|%p||%d|\n", ptr1, *ptr1);
		--i;
		ptr1++;
	}
	printf("\n");
	i = count;
	while (i > 0)
	{
		printf("|%p||%d|\n", ptr2, *ptr2);
		--i;
		ptr2++;
	}
}

int	main(void)
{
	int *ptr1;
	int *ptr2;
	size_t count;
	size_t size;

	printf("hello");
	count = 47480000;
	size = 47480000;
	ptr1 = calloc(count, size);
	ptr2 = ft_calloc(count, size);
	print_test(ptr1, ptr2, count);
	free(ptr1);
	free(ptr2);
	return (0);
}*/
