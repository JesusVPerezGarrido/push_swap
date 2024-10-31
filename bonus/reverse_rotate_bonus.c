/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:27:10 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/31 11:07:30 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations_bonus.h"

static void	reverse_rotate(t_list **stack)
{
	if (ft_lstsize(*stack) < 2)
		return ;
	ft_lstadd_front(stack, ft_lstdetach(stack, ft_lstlast(*stack)));
}

void	rra(t_args *args)
{
	reverse_rotate(&(args->stack_a));
}

void	rrb(t_args *args)
{
	reverse_rotate(&(args->stack_b));
}

void	rrr(t_args *args)
{
	reverse_rotate(&(args->stack_a));
	reverse_rotate(&(args->stack_b));
}
