/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 12:41:50 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/18 23:44:00 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	char	**args;
	int		*numbers;
	int		*indexed;
	int		count;

	args = NULL;
	args = prepare_args(argc, argv);
	if (!check_errors(argc, argv, args))
		return (0);
	count = count_argc(argc, args);
	numbers = malloc(sizeof(int) * count);
	if (!parse_check(numbers, args, count, argc))
		return (0);
	indexed = malloc(sizeof(int) * count);
	if (!index_check(indexed, argc, args, numbers))
		return (0);
	index_numbers(numbers, indexed, count);
	free(numbers);
	if (!check_is_sorted(indexed, count, argc, args))
		return (0);
	sorting(count, indexed);
	if (argc == 2)
		free_ft_split(args);
	free(indexed);
	exit (EXIT_SUCCESS);
}
