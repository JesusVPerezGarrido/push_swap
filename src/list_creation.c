/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_creation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:30:50 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/28 19:31:16 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	clean_strs(char **strs)
{
	int	index;

	index = -1;
	while (strs[++index])
		free(strs[index]);
	free(strs);
}

static char	**prepare_arguments(int argc, char	**argv)
{
	char	**strs;
	int		index;

	if (argc == 2)
		return (ft_split(argv[1], ' '));
	else
	{
		strs = ft_calloc(argc, sizeof(char *));
		if (!strs)
			return (0);
		index = -1;
		while (++index < argc - 1)
		{
			strs[index] = ft_strdup(argv[index + 1]);
			if (!strs[index])
			{
				while (index--)
					free(strs[index]);
				free(strs);
				return (0);
			}
		}
		return (strs);
	}
	return (0);
}

t_bool	create_list(int argc, char **argv, t_args *args)
{
	int		index;
	t_list	*node;
	int		*content;

	args->strs = prepare_arguments(argc, argv);
	index = -1;
	while (strs[++index])
	{
		content = ft_calloc(1, sizeof(int));
		node = ft_lstnew(content);
		if (!node || !content)
		{
			free(node);
			free(content);
			ft_lstclear(args->stack_a, free);
			return (false);
		}
		*content = ft_atoi(strs[index]);
		ft_lstadd_back(args->stack_a, node);
	}
	return (true);
}
