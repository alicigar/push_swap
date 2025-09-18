/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:41:19 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/18 23:38:56 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
