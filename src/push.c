/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:51:27 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/25 17:01:06 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void	push(t_list **source, t_list **dest)
{
	if (!*source)
		return ;
	ft_lstadd_front(dest, ft_lstdetach(source, *source));
}

void	pa(t_args *args)
{
	push(&(args->stack_b), &(args->stack_a));
	ft_printf("pa\n");
}

void	pb(t_args *args)
{
	push(&(args->stack_a), &(args->stack_b));
	ft_printf("pb\n");
}
