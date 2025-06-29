/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:34:07 by maemran           #+#    #+#             */
/*   Updated: 2025/02/07 19:34:07 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	two_num(t_lst **stack_a)
{
	if ((*stack_a)->index == 1)
		swap_a(stack_a);
}

void	three_num(t_lst **stack_a)
{
	if (((*stack_a)->index == 1 && (((*stack_a)->next)->next)->index == 0))
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
	}
	else if (((*stack_a)->index == 1 && ((*stack_a)->next)->index == 0))
		swap_a(stack_a);
	else if (((*stack_a)->index == 2 && ((*stack_a)->next)->index == 1))
	{
		rotate_a(stack_a);
		swap_a(stack_a);
	}
	else if (((*stack_a)->index == 2 && (((*stack_a)->next)->next)->index == 1))
		rotate_a(stack_a);
	else if (((*stack_a)->index == 0 && (((*stack_a)->next)->next)->index == 1))
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
}

void	four_num(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*head_a;
	int		dis;

	dis = 0;
	head_a = *stack_a;
	while (*stack_a != NULL)
	{
		if ((*stack_a)->index == 0)
			break ;
		dis++;
		(*stack_a) = (*stack_a)->next;
	}
	*stack_a = head_a;
	while (dis >= 0)
	{
		if ((*stack_a)->index == 0)
			push_b(stack_a, stack_b);
		else
			rotate_a(stack_a);
		dis--;
	}
	set_index(stack_a, *stack_a);
	three_num(stack_a);
	push_a(stack_b, stack_a);
}

void	five_num(t_lst **stack_a, t_lst **stack_b)
{
	int	i;

	i = 0;
	while (1)
	{
		if ((*stack_a)->index == 1 || ((*stack_a)->index == 0))
		{
			push_b(stack_a, stack_b);
			i++;
		}
		else
			rotate_a(stack_a);
		if (i == 2)
			break ;
	}
	if (is_sorted(*stack_b) == 0)
		swap_b(stack_b);
	set_index(stack_a, *stack_a);
	three_num(stack_a);
	push_a(stack_b, stack_a);
	push_a(stack_b, stack_a);
}

void	sort_algorthim(t_lst **stack_a, t_lst **stack_b, int argc)
{
	if (argc == 3)
		two_num(stack_a);
	if (argc == 4)
		three_num(stack_a);
	if (argc == 5)
		four_num(stack_a, stack_b);
	if (argc == 6)
		five_num(stack_a, stack_b);
	if (argc > 6)
		ft_radix_sort(stack_a, stack_b);
	ft_exit(stack_a, stack_b, 0);
}
