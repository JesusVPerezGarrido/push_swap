/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:31:36 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/30 12:22:19 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "libft.h"
# include "t_args.h"

/* swap a: 
 * Swaps the first two elements of stack a.
 *   Does nothing if there isn't at least 2 elements.
 */
void	sa(t_args *args);

/* swap b: 
 * Swaps the first two elements of stack b.
 *   Does nothing if there isn't at least 2 elements.
 */
void	sb(t_args *args);

/* double swap: 
 * swap a and swap b.
 */
void	ss(t_args *args);

/* push a: 
 * Takes the first element of stack b and adds it to the start of stack a.
 *   Does nothing if stack b is empty
 */
void	pa(t_args *args);

/* push b: 
 * Takes the first element of stack a and adds it to the start of stack b.
 *   Does nothing if stack a is empty
 */
void	pb(t_args *args);

/* rotate a: 
 * Moves all elementes of stack a one position higher, rotating the first
 *   elemente to the end of the stack. Does nothing if it doesn't contain
 *   at least 2 elements
 */
void	ra(t_args *args);

/* rotate b: 
 * Moves all elementes of stack b one position higher, rotating the first
 *   element to the end of the stack. Does nothing if it doesn't contain
 *   at least 2 elements
 */
void	rb(t_args *args);

/* double rotate: 
 * rotate a y rotate b.
 */
void	rr(t_args *args);

/* reverse rotate a: 
 * Moves all elementes of stack a one position lower, rotating the last
 *   element to the start of the stack. Does nothing if it doesn't contain
 *   at least 2 elements
 */
void	rra(t_args *args);

/* reverse rotate b: 
 * Moves all elementes of stack b one position lower, rotating the last
 *   element to the start of the stack. Does nothing if it doesn't contain
 *   at least 2 elements
 */
void	rrb(t_args *args);

/* double reverse rotate:
 * reverse rotate a and reverse rotate b
 */
void	rrr(t_args *args);

#endif
