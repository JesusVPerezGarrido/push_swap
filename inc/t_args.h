/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_args.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:33:47 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/30 11:34:01 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_ARGS_H
# define T_ARGS_H

# include "libft.h"

typedef struct s_args
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**strs;
}			t_args;

#endif
