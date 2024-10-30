/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:02:31 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/30 10:53:28 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static	void	rotate(t_list **stack)
{
	if (ft_lstsize(*stack) < 2)
		return ;
	ft_lstadd_back(stack, ft_lstdetach(stack, *stack));
}

void	ra(t_args *args)
{
	rotate(&(args->stack_a));
	ft_printf("ra\n");
}

void	rb(t_args *args)
{
	rotate(&(args->stack_b));
	ft_printf("rb\n");
}

void	rr(t_args *args)
{
	rotate(&(args->stack_a));
	rotate(&(args->stack_b));
	ft_printf("rr\n");
}
