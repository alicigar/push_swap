/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 01:46:30 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/18 23:06:19 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_two(int *stack_a)
{
	if (stack_a[0] > stack_a[1])
		sa(stack_a, 2);
}

void	sort_three(int *stack_a)
{
	if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] && stack_a[0] \
< stack_a[2])
		sa(stack_a, 3);
	else if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2])
	{
		sa(stack_a, 3);
		rra(stack_a, 3);
	}
	else if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2])
		ra(stack_a, 3);
	else if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2] && stack_a[0] \
< stack_a[2])
	{
		sa(stack_a, 3);
		ra(stack_a, 3);
	}
	else if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2])
		rra(stack_a, 3);
}

static int	find_min(int *stack, int size)
{
	int	i;
	int	min;

	i = 1;
	min = stack[0];
	while (i < size)
	{
		if (stack[i] < min)
			min = stack[i];
		i++;
	}
	return (min);
}

static void	select_rotate(int *stack_a, int *size_a, int min, int i)
{
	if (stack_a[3] == 1 && stack_a[4] == 0)
	{
		while (stack_a[0] != min)
		{
			rra(stack_a, *size_a);
			i++;
		}
	}
	else
	{
		while (stack_a[0] != min)
		{
			ra(stack_a, *size_a);
			i++;
		}
	}
}

void	sort_five(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	i;
	int	min;

	while (*size_a > 3)
	{
		min = find_min(stack_a, *size_a);
		i = 0;
		select_rotate(stack_a, size_a, min, i);
		pb(stack_a, size_a, stack_b, size_b);
	}
	sort_three(stack_a);
	while (*size_b > 0)
		pa(stack_a, size_a, stack_b, size_b);
}
