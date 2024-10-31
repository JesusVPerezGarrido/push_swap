/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_args_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:33:47 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/31 12:51:08 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_ARGS_BONUS_H
# define T_ARGS_BONUS_H

# include "libft.h"

typedef struct s_args
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**strs;
}			t_args;

#endif
