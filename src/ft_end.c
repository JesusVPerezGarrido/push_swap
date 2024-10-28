/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_end.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:50:56 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/28 19:37:04 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_clean(t_args *args)
{
	if (args)
	{
		if (args->stack_a)
			ft_lstclear(&(args->stack_a), free);
		free(args);
	}
}

void	ft_end(t_args *args, t_exit_code code)
{
	if (code != OK)
		write(STDERR_FILENO, "Error\n", 6);
	ft_clean(args);
	exit(0);
}
