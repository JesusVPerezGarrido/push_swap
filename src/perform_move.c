/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:14:34 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/30 13:38:34 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	mixed_move(t_args *args, t_cost move)
{
	if (move.prep_a.direction == UP)
		while (move.prep_a.node->prev)
			ra(args);
	if (move.prep_a.direction == DOWN)
		while (move.prep_a.node->prev)
			rra(args);
	if (move.prep_b.direction == UP)
		while (move.prep_b.node->prev)
			rb(args);
	if (move.prep_b.direction == DOWN)
		while (move.prep_b.node->prev)
			rrb(args);
}

void	perform_move(t_args *args, t_cost move, t_bool src_a)
{
	if (move.direction == UP)
	{
		while (move.prep_a.node->prev && move.prep_b.node->prev)
			rr(args);
		while (move.prep_a.node->prev)
			ra(args);
		while (move.prep_b.node->prev)
			rb(args);
	}
	if (move.direction == DOWN)
	{
		while (move.prep_a.node->prev && move.prep_b.node->prev)
			rrr(args);
		while (move.prep_a.node->prev)
			rra(args);
		while (move.prep_b.node->prev)
			rrb(args);
	}
	if (move.direction == MIXED)
		mixed_move(args, move);
	if (src_a)
		pb(args);
	else
		pa(args);
}
