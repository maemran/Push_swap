/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:32:43 by maemran           #+#    #+#             */
/*   Updated: 2025/02/07 19:32:43 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*head1;

	if (lstsize(*stack_a) != 0)
	{
		head1 = *stack_a;
		*stack_a = (*stack_a)->next;
		lstadd_front(stack_b, head1);
	}
	write(1, "pb\n", 3);
}

void	push_a(t_lst **stack_b, t_lst **stack_a)
{
	t_lst	*head1;

	if (lstsize(*stack_b) != 0)
	{
		head1 = *stack_b;
		*stack_b = (*stack_b)->next;
		lstadd_front(stack_a, head1);
	}
	write(1, "pa\n", 3);
}

void	rotate_a(t_lst **stack_a)
{
	t_lst	*head;
	t_lst	*last;

	if (lstsize(*stack_a) > 1)
	{
		head = *stack_a;
		last = *stack_a;
		while (last->next != NULL)
			last = last->next;
		*stack_a = head->next;
		head->next = NULL;
		last->next = head;
	}
	write(1, "ra\n", 3);
}

void	swap_a(t_lst **stack_a)
{
	t_lst	*head;
	t_lst	*temp;

	if (lstsize(*stack_a) < 2)
		return ;
	head = *stack_a;
	temp = head->next;
	head->next = temp->next;
	temp->next = head;
	*stack_a = temp;
	write(1, "sa\n", 3);
}

void	swap_b(t_lst **stack_b)
{
	t_lst	*head;
	t_lst	*temp;

	if (lstsize(*stack_b) < 2)
		return ;
	head = *stack_b;
	temp = head->next;
	head->next = temp->next;
	temp->next = head;
	*stack_b = temp;
	write(1, "sb\n", 3);
}
