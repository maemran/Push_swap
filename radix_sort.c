/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:33:55 by maemran           #+#    #+#             */
/*   Updated: 2025/02/07 19:33:55 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(t_lst *list)
{
	int	max_index;
	int	max_bits;

	max_index = 0;
	max_bits = 0;
	while (list)
	{
		if (list->index > max_index)
			max_index = list->index;
		list = list->next;
	}
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	ft_radix_sort(t_lst **stack_a, t_lst **stack_b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	i = 0;
	max_bits = get_max_bits(*stack_a);
	size = lstsize(*stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				rotate_a(stack_a);
			else
				push_b(stack_a, stack_b);
		}
		while (lstsize(*stack_b) > 0)
			push_a(stack_b, stack_a);
		i++;
	}
}
