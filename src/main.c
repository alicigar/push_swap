#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	char	**args;
	int		*numbers;
	int		count;

	if (argc < 2)
	{
		ft_printf("Error\n");
		return (1);
	}
	if (argc == 2 && empty_str(argv[1]))
		return (1);
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		count = 0;
		while (args[count])
			count++;
	}
	else
	{
		args = &argv[1];
		count = argc - 1;
	}
	numbers = malloc(sizeof(int) * count);
	if (!numbers)
	{
		if (argc == 2)
			free_ft_split(args);
		return (1);
	}
	if (!parsing_validation(args, count, numbers))
	{
		if (argc == 2)
			free_ft_split(args);
		free(numbers);
		return (1);
	}
	if (argc == 2)
		free_ft_split(args);
	free(numbers);
	return (0);
}
