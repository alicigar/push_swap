/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 22:54:17 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/18 23:06:15 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_max_bits(int count, int max_bits)
{
	while ((count - 1) >> max_bits)
		max_bits++;
	return (max_bits);
}

void	sorting(int count, int *indexed)
{
	int		stack_b[5];
	int		size_b;
	int		max_bits;

	max_bits = 0;
	size_b = 0;
	if (count == 2)
		sort_two(indexed);
	if (count == 3)
		sort_three(indexed);
	if (count == 4 || count == 5)
		sort_five(indexed, &count, stack_b, &size_b);
	if (count > 5)
	{
		max_bits = get_max_bits(count, max_bits);
		sort_radix(indexed, count, 0, max_bits);
	}
}

void	sort_radix(int *a, int count, int size_b, int max_bits)
{
	int	*b;
	int	i;
	int	bit;
	int	original_count;

	b = malloc(sizeof(int) * count);
	if (!b)
		return ;
	bit = 0;
	original_count = count;
	while (bit < max_bits)
	{
		i = 0;
		while (i++ < original_count)
		{
			if (((a[0] >> bit) & 1) == 0)
				pb(a, &count, b, &size_b);
			else
				ra(a, count);
		}
		while (size_b > 0)
			pa(a, &count, b, &size_b);
		bit++;
	}
	free(b);
}
