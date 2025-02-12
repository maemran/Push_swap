/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:33:28 by maemran           #+#    #+#             */
/*   Updated: 2025/02/07 19:33:28 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index(t_lst **stack_a, t_lst *head_a)
{
	t_lst	*head;
	int		count;

	head = *stack_a;
	while (*stack_a != NULL)
	{
		count = 0;
		while (head != NULL)
		{
			if ((*stack_a)->num > head->num)
				count++;
			head = head->next;
		}
		head = head_a;
		(*stack_a)->index = count;
		*stack_a = (*stack_a)->next;
	}
	*stack_a = head;
}

void	pre_push_swap(char **argv, t_lst **stack_a, t_lst **stack_b, int argc)
{
	t_lst	*new;
	int		i;

	i = 1;
	(void)argc;
	while (argv[i])
	{
		new = ft_create_node(ft_atoi(argv[i]));
		if (!new)
			ft_exit(stack_a, stack_b, 1);
		if (new->num > 2147483647 || new->num < -2147483648)
		{
			free(new);
			ft_exit(stack_a, stack_b, 1);
		}
		if (ft_add_node_to_back(stack_a, new) == NULL)
		{
			free(new);
			ft_exit(stack_a, stack_b, 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_lst	**stack_a;
	t_lst	**stack_b;

	if (argc == 1)
		exit(1);
	only_digit(argv);
	stack_a = malloc(sizeof(t_lst *));
	if (!stack_a)
		ft_exit(stack_a, NULL, 1);
	stack_b = malloc(sizeof(t_lst *));
	if (!stack_b)
		ft_exit(stack_a, stack_b, 1);
	*stack_a = NULL;
	*stack_b = NULL;
	pre_push_swap(argv, stack_a, stack_b, argc);
	duplicates_num(stack_a, *stack_a, stack_b);
	if (is_sorted(*stack_a) == 0)
		ft_exit(stack_a, stack_b, 0);
	set_index(stack_a, *stack_a);
	sort_algorthim(stack_a, stack_b, argc);
	ft_exit(stack_a, stack_b, 0);
	return (0);
}
