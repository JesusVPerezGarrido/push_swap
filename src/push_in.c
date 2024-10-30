/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:18:47 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/30 13:56:48 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_preparation	cost_to_put_first(t_list *node)
{
	int		cost_up;
	int		cost_down;

	cost_up = ft_lstprevsize(node);
	cost_down = ft_lstnextsize(node) + 1;
	if (cost_down < cost_up)
		return (set_prep(node, cost_down, DOWN));
	else if (cost_down > cost_up)
		return (set_prep(node, cost_up, UP));
	else
		return (set_prep(node, cost_down, ANY));
}

static t_list	*place_in_stack_b(t_list *stack, t_list *node)
{
	t_list	*biggest;
	t_list	*current;
	t_list	*closest;

	biggest = stack;
	current = biggest;
	closest = 0;
	while (current)
	{
		if (!closest)
		{
			if (*(int *)current->content > *(int *)biggest->content)
				biggest = current;
			if (*(int *)current->content < *(int *)node->content)
				closest = current;
		}
		else if (*(int *)current->content > *(int *)closest->content
			&& *(int *)current->content < *(int *)node->content)
			closest = current;
		current = current->next;
	}
	if (closest)
		return (closest);
	return (biggest);
}

static t_list	*place_in_stack_a(t_list *stack, t_list *node)
{
	t_list	*lowest;
	t_list	*current;
	t_list	*closest;

	lowest = stack;
	current = lowest;
	closest = 0;
	while (current)
	{
		if (!closest)
		{
			if (*(int *)current->content < *(int *)lowest->content)
				lowest = current;
			if (*(int *)current->content > *(int *)node->content)
				closest = current;
		}
		else if (*(int *)current->content < *(int *)closest->content
			&& *(int *)current->content > *(int *)node->content)
			closest = current;
		current = current->next;
	}
	if (closest)
		return (closest);
	return (lowest);
}

static t_cost	cost_to_push(t_args *args, t_list *node, t_bool src_a)
{
	t_cost			value;

	value.prep_a = cost_to_put_first(node);
	if (src_a)
		value.prep_b = cost_to_put_first(place_in_stack_b(args->stack_b, node));
	else
		value.prep_b = cost_to_put_first(place_in_stack_a(args->stack_a, node));
	if (value.prep_a.direction == value.prep_b.direction
		|| value.prep_a.direction == ANY || value.prep_b.direction == ANY)
	{
		if (value.prep_a.direction == ANY)
			value.direction = value.prep_b.direction;
		else
			value.direction = value.prep_a.direction;
		value.total = ft_highest(value.prep_a.cost, value.prep_b.cost);
	}
	else
	{
		value.direction = MIXED;
		value.total = value.prep_a.cost + value.prep_b.cost;
	}
	return (value);
}

void	push_cheapest_in(t_args *args, t_bool src_a)
{
	t_preparation	placeholder;
	t_list			*current;
	t_cost			cheapest_cost;
	t_cost			current_cost;

	if (src_a)
		current = args->stack_a;
	else
		current = args->stack_b;
	cheapest_cost.total = 2147483647;
	while (current)
	{
		current_cost = cost_to_push(args, current, src_a);
		if (current_cost.total < cheapest_cost.total)
			cheapest_cost = current_cost;
		current = current->next;
	}
	if (!src_a)
	{
		placeholder = cheapest_cost.prep_a;
		cheapest_cost.prep_a = cheapest_cost.prep_b;
		cheapest_cost.prep_b = placeholder;
	}
	perform_move(args, cheapest_cost, src_a);
}

/*
a:
1 5 7 0

b:
6 4
*/
