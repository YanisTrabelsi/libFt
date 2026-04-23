/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:13:47 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/23 15:13:47 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
	char c = 'D';
	c = ft_toupper(c);
	printf("%c\n", c);
    return 0;
}*/
