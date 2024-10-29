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

static void	clean_strs(char **strs)
{
	int	index;

	index = -1;
	while (strs[++index])
		free(strs[index]);
	free(strs);
}

static void	clean(t_args *args)
{
	if (args)
	{
		if (args->stack_a)
			ft_lstclear(&(args->stack_a), free);
		free(args);
		if (args->stack_b)
			ft_lstclear(&(args->stack_a), free);
		if (args->strs)
			clean_strs(args->strs);
	}
}

void	ft_end(t_args *args, t_exit_code code)
{
	if (code != OK)
		write(STDERR_FILENO, "Error\n", 6);
	ft_clean(args);
	exit(0);
}
