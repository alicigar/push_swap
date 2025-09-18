/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:46:42 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/17 16:37:56 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(int *stack, int count)
{
	int	temp;

	if (count < 2)
		return ;
	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
	ft_printf("sa\n");
}

void	ra(int *stack, int count)
{
	int	i;
	int	temp;

	if (count < 2)
		return ;
	temp = stack[0];
	i = 0;
	while (i < count - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[count - 1] = temp;
	ft_printf("ra\n");
}

void	rra(int	*stack, int count)
{
	int	i;
	int	temp;

	if (count < 2)
		return ;
	temp = stack[count - 1];
	i = count - 1;
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = temp;
	ft_printf("rra\n");
}

void	pa(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	i;
	int	temp;

	if (*size_b < 1)
		return ;
	temp = stack_b[0];
	i = *size_a;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = temp;
	*size_a = *size_a + 1;
	i = 0;
	while (i < *size_b - 1)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	*size_b = *size_b - 1;
	ft_printf("pa\n");
}

void	pb(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	i;
	int	temp;

	if (*size_a < 1)
		return ;
	temp = stack_a[0];
	i = *size_b;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = temp;
	*size_b = *size_b + 1;
	i = 0;
	while (i < *size_a - 1)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	*size_a = *size_a - 1;
	ft_printf("pb\n");
}
