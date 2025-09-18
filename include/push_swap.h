/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:09:38 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/18 23:45:28 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

int		is_valid_digit(char *str);
int		check_dupes(int *numbers, int count);
int		between_int(const char *nptr);
int		empty_str(char *str);
int		parsing_validation(char	**args, int args_num, int *values);
void	free_ft_split(char **array_of_numbers);
char	**prepare_args(int argc, char **argv);
char	**init_args(int argc, char **argv, int *count);
int		count_argc(int argc, char **args);
void	sa(int *stack, int count);
void	ra(int *stack, int count);
void	rra(int	*stack, int count);
void	pa(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	pb(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	sort_two(int *stack);
void	sort_three(int *stack);
void	sort_five(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	sort_radix(int *a, int count, int size_b, int max_bits);
int		get_max_bits(int count, int max_bits);
void	sorting(int count, int *indexed);
void	index_numbers(int *numbers, int *indexed, int count);
int		is_sorted(int *array, int count);
int		check_errors(int argc, char **argv, char **args);
int		parse_check(int *numbers, char **args, int count, int argc);
int		index_check(int *indexed, int argc, char **args, int *numbers);
int		check_is_sorted(int *indexed, int count, int argc, char **args);
int		count_args(char **args);

#endif
