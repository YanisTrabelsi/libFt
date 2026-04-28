/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:49:46 by ytrabels          #+#    #+#             */
/*   Updated: 2026/04/28 18:49:47 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim_str;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen((char *)s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim_str = malloc(end - start + 1);
	if (!trim_str)
		return (NULL);
	i = 0;
	while (start < end)
		trim_str[i++] = s1[start++];
	trim_str[i] = 0;
	return (trim_str);
}
/*
#include <stdio.h>
int main()
{
	char *str = "   xxx   xxx";
	char *set = " x";
	printf("%s\n", ft_strtrim (str, set));
}*/
