/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 23:00:37 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/19 00:25:07 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_errors(int argc, char **argv, char **args)
{
	if (argc < 2)
		return (0);
	if (!argv[1][0])
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (!args)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	parse_check(int *numbers, char **args, int count, int argc)
{
	if (!numbers)
	{
		if (argc == 2)
			free_ft_split(args);
		write(2, "Error\n", 6);
		return (0);
	}
	if (!parsing_validation(args, count, numbers))
	{
		if (argc == 2)
			free_ft_split(args);
		free(numbers);
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	index_check(int *indexed, int argc, char **args, int *numbers)
{
	if (!indexed)
	{
		if (argc == 2)
			free_ft_split(args);
		free(numbers);
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	check_is_sorted(int *indexed, int count, int argc, char **args)
{
	if (is_sorted(indexed, count))
	{
		if (argc == 2)
			free_ft_split(args);
		free(indexed);
		return (0);
	}
	return (1);
}

int	count_argc(int argc, char **args)
{
	int	count;

	count = 0;
	if (argc == 2)
		count = count_args(args);
	else
		count = argc - 1;
	return (count);
}
