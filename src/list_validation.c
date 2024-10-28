/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:35:10 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/28 19:58:34 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_bool	contains_chars(int argc, char **argv)
{
	int		arg_index;
	int		str_index;
	char	c;

	arg_index = 0;
	while (++arg_index < argc)
	{
		str_index = -1;
		while (argv[arg_index][++str_index])
		{
			c = argv[arg_index][str_index];
			if (!ft_isspace(c) && !ft_isdigit(c) && c != '-' && c != '+')
				return (true);
		}
	}
	return (false);
}

static t_bool	duplicate_numbers(t_list *lst)
{
	t_list	*lst_iterator;

	if (!lst)
		return (false);
	if (duplicate_numbers(lst->next))
		return (true);
	lst_iterator = lst->next;
	while (lst_iterator)
	{
		if (*((int *)lst->content) == *((int *)lst_iterator->content))
			return (true);
		lst_iterator = lst_iterator->next;
	}
	return (false);
}

t_bool	valid_list(int argc, char **argv, t_list **lst)
{
	if (contains_chars(argc, argv))
		return (false);
	if (duplicate_numbers(*lst))
		return (false);
	return (true);
}
