/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salshaha <salshaha@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:56:19 by salshaha          #+#    #+#             */
/*   Updated: 2025/02/05 12:32:20 by salshaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*node;
	t_list	*s;

	node = *lst;
	if (lst == NULL)
		return ;
	while (node != NULL)
	{
		s = node->next;
		free(node);
		node = s;
	}
	free(s);
	free(node);
	*lst = NULL;
}
