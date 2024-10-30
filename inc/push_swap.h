/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:04:45 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/30 14:22:20 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "t_args.h"
# include "t_cost.h"
# include "operations.h"

typedef enum e_exit_code
{
	OK,
	ARG_NUMBER,
	LIST_CREATION,
	INVALID_ARGS,
}	t_exit_code;

t_bool	create_list(int argc, char **argv, t_args *args);
t_bool	valid_list(int argc, char **argv, t_args *args);
void	sort_stack(t_args *args);
void	push_cheapest_in(t_args *args, t_bool src_a);
void	perform_move(t_args *args, t_cost move, t_bool src_a);
void	ft_end(t_args *args, t_exit_code code);

#endif
