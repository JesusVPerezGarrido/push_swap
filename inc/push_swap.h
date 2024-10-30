/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:04:45 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/30 10:11:03 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "t_args.h"
# include "operations.h"

typedef enum e_orientation
{
	UP,
	DOWN,
	ANY,
}	t_orientation;

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
t_list	*calculate_lowest(t_list *stack_a, t_list *stack_b);
void	ft_end(t_args *args, t_exit_code code);

#endif
