/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:31:46 by smorin            #+#    #+#             */
/*   Updated: 2024/04/26 15:58:54 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	stack_a = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (0);
	else if (argc == 2)
		split_arg(argv);
	else if (argc > 2)
		check_arg(argv);
	fill_stack_a(&stack_a, argv + 1, argc);
	if (!check_sort(stack_a))
		sort(&stack_a);
	ft_free_stack(&stack_a);
	return (0);
}
