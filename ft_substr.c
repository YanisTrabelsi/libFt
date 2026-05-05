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
	size_t	s_len;
	size_t	j;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		sub_str = malloc(1);
		if (!sub_str)
			return (NULL);
		sub_str[0] = '\0';
		return (sub_str);
	}
	if (len > s_len - start)
		len = s_len - start;
	sub_str = malloc(len + 1);
	if (!sub_str)
		return (NULL);
	j = 0;
	while (j < len)
		sub_str[j++] = s[start++];
	sub_str[j] = '\0';
	return (sub_str);
}
/*
int	main(void)
{
	return (0);
}*/
