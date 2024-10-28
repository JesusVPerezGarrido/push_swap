/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:01:22 by jeperez-          #+#    #+#             */
/*   Updated: 2024/10/25 18:24:58 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	contains_only_numbers(int argc, char **argv)
{
	int	arg_index;
	int	str_index;

	arg_index = 0;
	while (++arg_index < argc)
	{
		str_index = -1;
		while (argv[arg_index][++str_index])
		{
			if (!ft_isdigit(argv[arg_index][str_index])
				&& !ft_isspace(argv[arg_index][str_index])
				&& argv[arg_index][str_index] != '+'
				&& argv[arg_index][str_index] != '-')
				return (0);
		}
	}
	return (1);
}

int	valid_arguments(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	if (!contains_only_numbers(argc, argv))
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	t_args	*args;

	args
	if (!valid_arguments(argc, argv))
	{
		ft_printf("error\n");
		exit (1);
	}
	ft_printf("test");
}
