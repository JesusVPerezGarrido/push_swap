/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:31:00 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/31 11:08:05 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations_bonus.h"

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

void	sa(t_args *args)
{
	swap(&(args->stack_a));
}

void	sb(t_args *args)
{
	swap(&(args->stack_b));
}

void	ss(t_args *args)
{
	swap(&(args->stack_a));
	swap(&(args->stack_b));
}
