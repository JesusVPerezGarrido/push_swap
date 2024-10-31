/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:04:45 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/31 10:45:32 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "libft.h"
# include "t_args_bonus.h"
# include "operations_bonus.h"

typedef enum e_exit_code
{
	OK,
	ARG_NUMBER,
	LIST_CREATION,
	INVALID_ARGS,
	INVALID_ORDER,
}	t_exit_code;

t_bool	create_list(int argc, char **argv, t_args *args);
t_bool	valid_list(int argc, char **argv, t_args *args);
void	sort_stack(t_args *args);
void	ft_end(t_args *args, t_exit_code code);

#endif
