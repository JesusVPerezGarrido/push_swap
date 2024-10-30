/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:33:03 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/30 10:49:56 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	initial_desp(t_args *args)
{
	if (ft_lstsize(args->stack_a) > 3)
	{
		if (ft_lstsize(args->stack_a) > 4)
			pb(args);
		pb(args);
	}
}

static t_bool	is_sorted(t_list *lst)
{
	while (lst->next)
	{
		if (*(int *)lst->content < *(int *)lst->next->content)
			lst = lst->next;
		else
			return (false);
	}
	return (true);
}

static void	sort_only_3(t_args *args, t_list **stack)
{
	if (is_sorted(*stack))
		return ;
	if (ft_lstsize(*stack) < 3)
		sa(args);
	else
	{
		if (*(int *)(*stack)->content < *(int *)(*stack)->next->content)
			rra(args);
		else if (*(int *)(*stack)->content > *(int *)(*stack)->next->content
			&& *(int *)(*stack)->content > *(int *)(*stack)->next->next->content)
			ra(args);
		if (!is_sorted(*stack))
			sa(args);
	}
}

/*
1 2 3 \0
1 3 2 rra sa
2 3 1 rra
3 1 2 ra
3 2 1 ra sa
2 1 3 sa
*/

void	sort_stack(t_args *args)
{
	if (is_sorted(args->stack_a))
		return ;
	initial_desp(args);
	/*while (ft_lstsize(args->stack_a) > 3)
		sort_stack(args->stack_a, args->stack_b);*/
	sort_only_3(args, &args->stack_a);
	/*while (ft_lstsize(args->stack_b))
		sort_stack();
	final_sort();*/
}

/*
5 2 4 6

3 1
 */
