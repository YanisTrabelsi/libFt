/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:41:33 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/28 13:43:15 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	int		i;
	int		j;
	size_t	s_len;

	s_len = ft_strlen((char *)s);
	if (len > s_len)
		len = s_len;
	if (start > s_len)
		sub_str = malloc(1);
	else if (start + len > s_len)
		sub_str = malloc(s_len - start + 1);
	else
		sub_str = malloc(len + 1);
	if (!sub_str)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && len > 0)
	{
		sub_str[j++] = s[i++];
		len--;
	}
	sub_str[j] = 0;
	return (sub_str);
}
/*
int	main(void)
{
	return (0);
}*/
