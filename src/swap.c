/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:31:00 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/25 16:42:15 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void	swap(t_list **stack)
{
	t_list	*first_node;
	t_list	*second_node;

	if (ft_lstsize(*stack) < 2)
		return ;
	first_node = ft_lstdetach(stack, *stack);
	second_node = ft_lstdetach(stack, *stack);
	ft_lstadd_front(stack, first_node);
	ft_lstadd_front(stack, second_node);
}

void	sa(t_list **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	sb(t_list **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
