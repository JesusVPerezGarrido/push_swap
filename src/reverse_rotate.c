/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:27:10 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/30 10:53:30 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void	reverse_rotate(t_list **stack)
{
	if (ft_lstsize(*stack) < 2)
		return ;
	ft_lstadd_front(stack, ft_lstdetach(stack, ft_lstlast(*stack)));
}

void	rra(t_args *args)
{
	reverse_rotate(&(args->stack_a));
	ft_printf("rra\n");
}

void	rrb(t_args *args)
{
	reverse_rotate(&(args->stack_b));
	ft_printf("rrb\n");
}

void	rrr(t_args *args)
{
	reverse_rotate(&(args->stack_a));
	reverse_rotate(&(args->stack_b));
	ft_printf("rrr\n");
}
