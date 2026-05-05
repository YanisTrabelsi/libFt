/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytrabels <ytrabels@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 19:07:16 by ytrabels          #+#    #+#             */
/*   Updated: 2026/05/05 21:12:23 by ytrabels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!*lst)
		return ;
	temp = *lst;
	*lst = temp->next;
	while (*lst)
	{
		del(temp->content);
		free(temp);
		temp = *lst;
		*lst = temp->next;
	}
	del(temp->content);
	free(temp);
	lst = NULL;
}
