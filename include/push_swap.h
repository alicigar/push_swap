/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:09:38 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/05 16:35:10 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

/*typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_node;*/

int		is_valid_digit(char *str);
int		check_dupes(int *numbers, int count);
int		between_int(const char *nptr);
int		empty_str(char *str);
int		parsing_validation(char	**args, int args_num, int *values);
void	free_ft_split(char **array_of_numbers);

#endif
