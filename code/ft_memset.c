/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:21:56 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/21 16:21:56 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t count)
{
	char	*c;

	c = ptr;
	while (count-- > 0)
		*c++ = value;
	return (ptr);
}
