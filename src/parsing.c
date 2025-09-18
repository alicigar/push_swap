/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 12:41:53 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/18 23:26:24 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_valid_digit(char *str)
{
	int	i;

	if (!str || !*str)
		return (0);
	i = 0;
	if (str[i] == '-')
	{
		if (str[i + 1] == '\0')
			return (0);
		i++;
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_dupes(int *numbers, int count)
{
	int	i;
	int	j;

	i = 0;
	while (i < count)
	{
		j = i + 1;
		while (j < count)
		{
			if (numbers[i] == numbers[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	between_int(const char *nptr)
{
	long long	r;
	int			ng;

	r = 0;
	ng = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			ng = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		r = r * 10 + (*nptr - '0');
		if ((ng == 1 && r > 2147483647) || (ng == -1 && - r < -2147483648))
			return (0);
		nptr++;
	}
	return (1);
}

int	empty_str(char *str)
{
	int	i;

	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (str[i] < 9 || str[i] > 13))
			return (0);
		i++;
	}
	return (1);
}

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
	if (check_dupes(numbers, count))
		return (0);
	return (1);
}