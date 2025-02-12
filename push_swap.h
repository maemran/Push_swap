/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:33:44 by maemran           #+#    #+#             */
/*   Updated: 2025/02/07 19:33:46 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_lst
{
	struct s_lst	*next;
	long long int	num;
	int				index;
}					t_lst;

void				only_digit(char **argv);
int					is_sorted(t_lst *head_a);
void				duplicates_num(t_lst **lst_a, t_lst *stack_a,
						t_lst **stack_b);
void				ft_exit(t_lst **stack_a, t_lst **stack_b, int type);
void				lstclear(t_lst **lst);
void				lstadd_front(t_lst **lst, t_lst *new);
int					lstsize(t_lst *lst);
void				push_b(t_lst **stack_a, t_lst **stack_b);
void				push_a(t_lst **stack_b, t_lst **stack_a);
void				rotate_a(t_lst **stack_a);
void				swap_a(t_lst **stack_a);
void				set_index(t_lst **stack_a, t_lst *head_a);
void				ft_radix_sort(t_lst **stack_a, t_lst **stack_b);
t_lst				*ft_create_node(long long int num);
t_lst				*ft_get_last_node(t_lst *head);
void				*ft_add_node_to_back(t_lst **stack, t_lst *new_node);
int					get_max_bits(t_lst *list);
void				two_num(t_lst **stack_a);
void				three_num(t_lst **stack_a);
void				four_num(t_lst **stack_a, t_lst **stack_b);
void				five_num(t_lst **stack_a, t_lst **stack_b);
void				sort_algorthim(t_lst **stack_a, t_lst **stack_b, int argc);
void				pre_push_swap(char **argv, t_lst **stack_a, t_lst **stack_b,
						int argc);
void				swap_b(t_lst **stack_b);

#endif
