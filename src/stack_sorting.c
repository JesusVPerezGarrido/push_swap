/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:33:03 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/30 10:04:27 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_source(t_args *args, t_list *src, t_list *node)
{
	int	pos;

	pos = 0;
	while (src != node)
	{
		src = src->next;
		pos++;
	}
	if (pos < ft_lstsize(node))
		while (node->prev)
			ra(args);
	else
		while (node->prev)
			rra(args);
}

void	move_dest(t_args *args, t_list *dest, t_list *node)
{
	t_list	*current;
	t_list	*closest;
	int		pos;

	current = dest;
	closest = current;
	pos = 0;
	while (current)
	{
		if (current->content < node->content && current->content > closest->content)
		{
			closest = node;
		}
		pos++;
		node = node->next;
	}
	if (pos < ft_lstsize(closest))
		while (closest->prev)
			rb(args);
	else
		while (closest->prev)
			rrb(args);
}

void	perform_move(t_args *args, t_list *src, t_list *dest, t_list *node)
{
	move_source(args, src, node);
	move_dest(args, dest, node);
	pb(args);
}

void	final_sort(t_args *args)
{
	t_list	*lst;
	t_list	*node;
	int		pos;
	int		node_pos;

	pos = 0;
	lst = args->stack_a;
	node = lst;
	while (lst)
	{
		if (lst->content < node->content)
		{
			node = lst;
			node_pos = pos;
		}
		pos++;
		lst = lst->next;
	}
	if (pos < ft_lstsize(node))
		while (node->prev)
			ra(args);
	else
		while (node->prev)
			rra(args);
}

void    sort_stack(t_args *args)
{
	if (ft_lstsize(args->stack_a) > 3)
	{
		if (ft_lstsize(args->stack_a) > 4)
			pb(args);
		pb(args);
	}
	while (ft_lstsize(args->stack_a) > 3)
		perform_move(args, args->stack_a, args->stack_b,
			calculate_lowest(args->stack_a, args->stack_b));
	while (ft_lstsize(args->stack_b))
		perform_move(args, args->stack_b, args->stack_a,
			calculate_lowest(args->stack_b, args->stack_a));
	final_sort(args);
}

/*
5 2 4 6

3 1
 */
