/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_validation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:39:21 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/09 20:17:27 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	parsing_validation(char	**args, int count, int *numbers)
{
	int	i;

	i = 0;
	while (i < count)
	{
		if (!is_valid_digit(args[i]))
			return (0);
		if (!between_int(args[i]))
			return (0);
		numbers[i] = ft_atoi(args[i]);
		i++;
	}
	if (!check_dupes(numbers, count))
		return (0);
	return (1);
}
