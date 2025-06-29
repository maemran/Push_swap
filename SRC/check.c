/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:31:36 by maemran           #+#    #+#             */
/*   Updated: 2025/02/07 19:31:36 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	only_digit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] == '-' && j == 0) || (argv[i][j] == '+' && j == 0))
				j++;
			if (ft_isdigit(argv[i][j]) == 0)
			{
				write(2, "Error\n", 7);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	ft_exit(t_lst **stack_a, t_lst **stack_b, int type)
{
	if (type == 1)
		write(2, "Error\n", 7);
	if (stack_a)
	{
		lstclear(stack_a);
		free(stack_a);
	}
	if (stack_b)
	{
		lstclear(stack_b);
		free(stack_b);
	}
	exit(1);
}

void	duplicates_num(t_lst **lst_a, t_lst *stack_a, t_lst **stack_b)
{
	t_lst	*list;
	int		count;

	(void)stack_b;
	list = stack_a;
	while (stack_a != NULL)
	{
		count = 0;
		list = *lst_a;
		while (list != NULL)
		{
			if (stack_a->num == list->num)
				count++;
			list = list->next;
		}
		if (count > 1)
			ft_exit(lst_a, stack_b, 1);
		stack_a = stack_a->next;
	}
	free(list);
}

int	is_sorted(t_lst *head_a)
{
	int		flag;
	t_lst	*head;

	flag = 0;
	while (head_a)
	{
		head = head_a;
		while (head)
		{
			if (head_a->num > head->num)
				flag = 1;
			head = head->next;
		}
		head_a = head_a->next;
	}
	free(head);
	return (flag);
}
