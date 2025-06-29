/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:33:20 by maemran           #+#    #+#             */
/*   Updated: 2025/02/07 19:33:20 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	lstclear(t_lst **lst)
{
	t_lst	*node;
	t_lst	*s;

	node = *lst;
	if (lst == NULL)
		return ;
	while (node != NULL)
	{
		s = node->next;
		free(node);
		node = s;
	}
	free(node);
	*lst = NULL;
}

int	lstsize(t_lst *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

void	lstadd_front(t_lst **lst, t_lst *new)
{
	new->next = *lst;
	*lst = new;
}
