/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:04:45 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/28 19:36:38 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "t_args.h"

typedef enum e_exit_code
{
	OK,
	ARG_NUMBER,
	LIST_CREATION,
	INVALID_ARGS,
}	t_exit_code;

t_bool	create_list(int argc, char **argv, t_list **lst);
t_bool	valid_list(int argc, char **argv, t_list **lst);
void	ft_end(t_args *args, t_exit_code code);

#endif
