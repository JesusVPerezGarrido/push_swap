/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorting_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:32:28 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/31 12:51:17 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static t_bool	is_sorted(t_list *lst)
{
	if (!lst)
		return (true);
	while (lst->next)
	{
		if (*(int *)lst->content > *(int *)lst->next->content)
			return (false);
		lst = lst->next;
	}
	return (true);
}

static void	perform_order_cont(t_args *args, char *order)
{
	if (!ft_strncmp(order, "sa\n", sizeof("ss\n")))
		sa(args);
	else if (!ft_strncmp(order, "sb\n", sizeof("sb\n")))
		sb(args);
	else if (!ft_strncmp(order, "ss\n", sizeof("ss\n")))
		ss(args);
	else if (!ft_strncmp(order, "rra\n", sizeof("rra\n")))
		rra(args);
	else if (!ft_strncmp(order, "rrb\n", sizeof("rrb\n")))
		rrb(args);
	else if (!ft_strncmp(order, "rrr\n", sizeof("rrr\n")))
		rrr(args);
	else
	{
		free(order);
		ft_end(args, INVALID_ORDER);
	}
}

static void	perform_order(t_args *args, char *order)
{
	if (!ft_strncmp(order, "pa\n", sizeof("pa\n")))
		pa(args);
	else if (!ft_strncmp(order, "pb\n", sizeof("pb\n")))
		pb(args);
	else if (!ft_strncmp(order, "ra\n", sizeof("ra\n")))
		ra(args);
	else if (!ft_strncmp(order, "rb\n", sizeof("rb\n")))
		rb(args);
	else if (!ft_strncmp(order, "rr\n", sizeof("rr\n")))
		rr(args);
	else
		perform_order_cont(args, order);
}

void	sort_stack(t_args *args)
{
	char	*order;

	order = get_next_line(0);
	while (order)
	{
		perform_order(args, order);
		free(order);
		order = get_next_line(0);
	}
	if (is_sorted(args->stack_a) && !args->stack_b)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	ft_end(args, OK);
}
