/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:02:31 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/25 16:24:26 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static	void	rotate(t_list **stack)
{
	if (ft_lstsize(*stack) < 2)
		return ;
	ft_lstadd_front(stack, ft_lstdetach(stack, ft_lstlast(*stack)));
}

void	ra(t_list **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rb(t_list **stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
