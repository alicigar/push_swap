/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 23:17:40 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/19 00:24:58 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	**prepare_args(int argc, char **argv)
{
	if (argc < 2 || (argc == 2 && empty_str(argv[1])))
		return (NULL);
	if (argc == 2)
		return (ft_split(argv[1], ' '));
	return (&argv[1]);
}

int	count_args(char **args)
{
	int	count;

	count = 0;
	while (args[count])
		count++;
	return (count);
}

int	is_sorted(int *array, int count)
{
	int	i;

	i = 0;
	while (i < count - 1)
	{
		if (array[i] > array[i + 1])
			return (0);
		i++;
	}
	return (1);
}
