/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 20:41:02 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/21 20:41:02 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*c;
	const char	*d;

	c = dest;
	d = src;
	if (src < dest)
	{
		while (n-- > 0)
			c[n] = d[n];
		return (dest);
	}
	while (n-- > 0)
		*c++ = *d++;
	return (dest);
}
