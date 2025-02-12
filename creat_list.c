/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:31:52 by maemran           #+#    #+#             */
/*   Updated: 2025/02/07 19:31:52 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*ft_create_node(long long int num)
{
	t_lst	*new_node;

	new_node = malloc(sizeof(t_lst));
	if (!new_node)
		return (NULL);
	new_node->num = num;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}

t_lst	*ft_get_last_node(t_lst *head)
{
	if (!head)
		return (NULL);
	while (head -> next)
		head = head -> next;
	return (head);
}

void	*ft_add_node_to_back(t_lst **stack, t_lst *new_node)
{
	t_lst	*tmp;

	if (!new_node)
		return (NULL);
	if (*stack)
	{
		tmp = ft_get_last_node(*stack);
		if (!tmp)
			return (NULL);
		tmp -> next = new_node;
	}
	else
		*stack = new_node;
	return ("");
}
