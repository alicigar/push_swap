/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 12:41:50 by alicigar          #+#    #+#             */
/*   Updated: 2025/09/05 17:35:51 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	int		values[100];  /*provisional, hay que reservar memoria bien*/
	char	**args;
	int		args_num;

	if (argc < 2)
	{
		ft_printf("Error\nInvalid number of arguments");
		return (1);
	}
	args = NULL;
	if (argc == 2)
	{
		args = ft_split(argv[1], 32);
		args_num = 0;
		while (args[args_num])
			args_num++;
	}
	else
	{
		args = &argv[1];
		args_num = argc - 1;
	}
	if (!parsing_validation(args, args_num, values))
	{
		ft_printf("%d\n", values[0]);
		/*ft_printf("%d\n", values[1]);
		ft_printf("%d\n", values[2]);
		ft_printf("%d\n", values[3]);
		ft_printf("%d\n", values[4]);
		ft_printf("%d\n", values[5]);
		ft_printf("%d\n", values[6]);
		ft_printf("%d\n", values[7]);
		ft_printf("%d\n", values[8]);*/
		return (1);
	}
	/*if (argc == 2)
		funcion para liberar memoria del ft_split
	return (0);*/
}

/*
ATT: liberación de memoria. Por ejemplo, si uso ft_split, liberar. 
Por cada lista, libero cada nodo. Por cada reserva, libera. 
main y parsing
 *Leer los números que te dan por consola (argv): (argc > 1) porque a partir de 
 1 arg hasta infinito arg tanto str como int. Por cada caso de fallo, lanzar
 nuestra propia implementación ft_printf para lanzar mensaje de error.
*Crear una función de validación (ft_validation) o más si es necesario por la
Norma (Que solo acepta 25 líneas por función, 5 funciones por archivo, 
solo permite una instrucción por línea, no permite declarar la variable y 
asignarle valor en la misma línea, ni tampoco en una estructura de control 
realizar otras instrucciones...
entre otros, que el código sea super legible)
 * Verificar que son válidos (no repetidos, no letras, no vacíos)
 * ft_split para separar los args si vienen en un solo string, ft_atoi para
 convertir los str a int
 * Guardarlos en tu stack (normalmente una lista enlazada)
 *en el main, return 1 es que hubo un error, y en return 0 que todo correcto. 
 */
/*ALGORITMO
 -2 números: "sa" (sort stack A) si están desordenados
 -3 números: hay solo unas pocas combinaciones posibles, hardcoding.
 -5 números: "pb" para sacar los más pequeños y luego reinsertarlos.
 más números: radix sort: adaptados a stacks.
 */