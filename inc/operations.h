/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:31:36 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/25 15:28:25 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "libft.h"

/* swap a: 
 * Swaps the first two elements of stack a.
 *   Does nothing if there isn't at least 2 elements.
 */
void	sa(t_list **stack_a);

/* swap b: 
 * Swaps the first two elements of stack b.
 *   Does nothing if there isn't at least 2 elements.
 */
void	sb(t_list **stack_b);

/* double swap: 
 * swap a and swap b.
 */
void	ss(t_list **stack_a, t_list **stack_b);

/* push a: 
 * Takes the first element of stack b and adds it to the start of stack a.
 *   Does nothing if stack b is empty
 */
void	pa(t_list **stack_a, t_list **stack_b);

/* push b: 
 * Takes the first element of stack a and adds it to the start of stack b.
 *   Does nothing if stack a is empty
 */
void	pb(t_list **stack_a, t_list **stack_b);

/* rotate a: 
 * Moves all elementes of stack a one position higher, rotating the first
 *   elemente to the end of the stack. Does nothing if it doesn't contain
 *   at least 2 elements
 */
void	ra(t_list **stack_a);

/* rotate b: 
 * Moves all elementes of stack b one position higher, rotating the first
 *   element to the end of the stack. Does nothing if it doesn't contain
 *   at least 2 elements
 */
void	rb(t_list **stack_b);

/* double rotate: 
 * rotate a y rotate b.
 */
void	rb(t_list **stack_b);

/* reverse rotate a: 
 * Moves all elementes of stack a one position lower, rotating the last
 *   element to the start of the stack. Does nothing if it doesn't contain
 *   at least 2 elements
 */
void	rra(t_list **stack_a);

/* reverse rotate b: 
 * Moves all elementes of stack b one position lower, rotating the last
 *   element to the start of the stack. Does nothing if it doesn't contain
 *   at least 2 elements
 */
void	rrb(t_list **stack_a);

/* double reverse rotate:
 * reverse rotate a and reverse rotate b
 */
void	rrr(t_list **stack_a, t_list **stack_b);

#endif
