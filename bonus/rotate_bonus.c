/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:02:31 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/31 11:07:43 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations_bonus.h"

static	void	rotate(t_list **stack)
{
	if (ft_lstsize(*stack) < 2)
		return ;
	ft_lstadd_back(stack, ft_lstdetach(stack, *stack));
}

void	ra(t_args *args)
{
	rotate(&(args->stack_a));
}

void	rb(t_args *args)
{
	rotate(&(args->stack_b));
}

void	rr(t_args *args)
{
	rotate(&(args->stack_a));
	rotate(&(args->stack_b));
}
