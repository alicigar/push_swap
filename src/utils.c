/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 23:17:40 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/19 00:35:01 by alicigar         ###   ########.fr       */
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

void	index_numbers(int *numbers, int *indexed, int count)
{
	int	i;
	int	j;
	int	rank;

	i = 0;
	while (i < count)
	{
		rank = 0;
		j = 0;
		while (j < count)
		{
			if (numbers[i] > numbers[j])
				rank++;
			j++;
		}
		indexed[i] = rank;
		i++;
	}
}

void	free_ft_split(char **array_of_numbers)
{
	int	i;

	if (!array_of_numbers)
		return ;
	i = 0;
	while (array_of_numbers[i])
	{
		free(array_of_numbers[i]);
		i++;
	}
	free(array_of_numbers);
}
