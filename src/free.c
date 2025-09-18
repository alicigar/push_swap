/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:58:27 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/18 23:39:07 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
