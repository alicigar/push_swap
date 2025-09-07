/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 12:41:53 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/05 17:36:48 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_valid_digit(char *str)
{
	int	i;

	if (!str || !*str)
	{
		ft_printf("Error\nMissing input.");
		return (0);
	}
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			ft_printf("Error\nInvalid character detected.");
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_dupes(int *values, int args_num)
{
	int	i;
	int	j;

	i = 0;
	while (i < args_num)
	{
		j = i + 1;
		while (j < args_num)
		{
			if (values[i] == values[j])
			{
				ft_printf("Error\nDuplicate values detected.");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	between_int(const char *nptr)
{
	long long	r;
	int		ng;

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
		{
			ft_printf("Error\n/*Number is out of range.*/");
			return (0);
		}
		nptr++;
	}
	return (1);
}

int	parsing_validation(char	**args, int args_num, int *values)
{
	int	i;

	i = 0;
	while (i < args_num)
	{
		if (!is_valid_digit(args[i]))
			return (0);
		if (!between_int(args[i]))
			return (0);
		values[i] = ft_atoi(args[i]);
		i++;
	}
	if (!check_dupes(values, args_num))
		return (0);
	return (1);
}
/*
return(0): el argumento no es valido, return(1): el argumento es valido.
lo convierte con ft_atoi
verifica que está entre int min e int max
evita números duplicados/que se repitan
*/