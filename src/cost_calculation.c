/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_calculation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:18:03 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/29 12:18:03 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	cost_to_put_first(t_list *list, t_list *node)
{
	int	pos;

	pos = 0;
	while (list && list != node)
	{
		list = list->next;
		pos++;
	}
	return (ft_lowest(pos, ft_lstsize(node)));
}

static int	calculate_position(t_list *stack, int insert)
{
	t_list	*node;
	t_list	*closest;

	node = stack;
	closest = node;
	while (node)
	{
		if (node->content < insert && node->content > closest->content)
		{
			closest = node;
		}
		pos++;
		node = node->next;
	}
	return (cost_to_put_first(stack, closest));
}

t_list	*calculate_lowest(t_list *stack_a, t_list *stack_b)
{
	t_list	*node;
	t_list	*cheapest_node;
	int		current_cost;
	int		lowest_cost;

	lowest_cost = 2147483647;
	node = stack_a;
	while (node)
	{
		current_cost = cost_to_put_first(stack_a, node);
		current_cost += calculate_position(stack_b, node->content);
		if (current_cost < lowest_cost)
		{
			current_cost = lowest_cost;
			cheapest_node = node;
		}
		node = node->next;
	}
	return (cheapest_node);
}