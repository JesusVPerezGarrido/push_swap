/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:33:03 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/30 14:22:06 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	initial_desp(t_args *args)
{
	if (ft_lstsize(args->stack_a) > 3)
	{
		if (ft_lstsize(args->stack_a) > 4)
			pb(args);
		pb(args);
	}
}

static t_bool	is_sorted(t_list *lst)
{
	while (lst->next)
	{
		if (*(int *)lst->content < *(int *)lst->next->content)
			lst = lst->next;
		else
			return (false);
	}
	return (true);
}

static void	sort_only_3(t_args *args, t_list **stack)
{
	t_list	*first_node;
	t_list	*second_node;
	t_list	*third_node;

	if (is_sorted(*stack))
		return ;
	if (ft_lstsize(*stack) < 3)
		sa(args);
	else
	{
		first_node = (*stack);
		second_node = (*stack)->next;
		third_node = (*stack)->next->next;
		if (*(int *)first_node->content < *(int *)(*stack)->next->content)
			rra(args);
		else if (*(int *)first_node->content > *(int *)second_node->content
			&& *(int *)first_node->content > *(int *)third_node->content)
			ra(args);
		if (!is_sorted(*stack))
			sa(args);
	}
}

static void	final_sort(t_args *args)
{
	t_list	*lst;
	t_list	*node;

	lst = args->stack_a;
	node = lst;
	while (lst)
	{
		if (*(int *)lst->content < *(int *)node->content)
			node = lst;
		lst = lst->next;
	}
	if (ft_lstnextsize(node) < ft_lstprevsize(node))
		while (node->prev)
			rra(args);
	else
		while (node->prev)
			ra(args);
}

void	sort_stack(t_args *args)
{
	if (is_sorted(args->stack_a))
		return ;
	initial_desp(args);
	while (ft_lstsize(args->stack_a) > 3)
		push_cheapest_in(args, 1);
	sort_only_3(args, &args->stack_a);
	while (ft_lstsize(args->stack_b))
		push_cheapest_in(args, 0);
	final_sort(args);
}

/*
5 2 4 6

3 1
 */
