/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:33:03 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/29 10:33:03 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_stack(t_args *args)
{
	if (ft_lstsize(args->stack_a) > 3)
	{
		if (ft_lstsize(args->stack_a) > 4)
			pb(args);
		pb(args);
	}
	while (ft_lstsize(args->stack_a) > 3)
	{
		perform_move(args, calculate_lowest(args->stack_a, args->stack_b));
	}
}

/*
5 2 4 6

3 1
 */