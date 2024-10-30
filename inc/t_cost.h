/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_cost.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:55:56 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/30 14:22:55 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_COST_H
# define T_COST_H

# include "libft.h"

typedef enum e_direction
{
	ANY,
	UP,
	DOWN,
	MIXED,
}	t_direction;

typedef struct s_preparation
{
	t_list		*node;
	int			cost;
	t_direction	direction;
}				t_preparation;

typedef struct s_cost
{
	int				total;
	t_direction		direction;
	t_preparation	prep_a;
	t_preparation	prep_b;
}					t_cost;

t_preparation	set_prep(t_list *node, int cost, t_direction dir);

#endif
