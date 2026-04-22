/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 19:10:07 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/21 19:10:07 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "lib.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*c;
	const char	*d;

	c = dest;
	d = src;
	while (n-- > 0)
		*c++ = *d++;
	return (dest);
}
