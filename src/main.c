/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:01:22 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/28 19:36:45 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_args	*args;

	args = ft_calloc(1, sizeof(t_args));
	if (argc < 2)
		ft_end(args, ARG_NUMBER);
	if (!create_list(argc, argv, args))
		ft_end(args, LIST_CREATION);
	if (!valid_list(argc, argv, args))
		ft_end(args, INVALID_ARGS);
	sort_stack(args);
	ft_end(args, OK);
}
