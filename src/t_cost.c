/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_cost.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:55:05 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/30 12:14:31 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_cost.h"

t_preparation	set_prep(t_list *node, int cost, t_direction dir)
{
	t_preparation	value;

	value.node = node;
	value.cost = cost;
	value.direction = dir;
	return (value);
}
