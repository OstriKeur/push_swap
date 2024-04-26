/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:32:15 by smorin            #+#    #+#             */
/*   Updated: 2024/04/26 16:03:43 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	free_all_and_error(t_stack *stack, char *s)
{
	ft_free_stack(&stack);
	if (!s)
		exit(1);
	ft_putendl_fd("Error\n", 2);
	exit(1);
}

int	ft_check_size(char	*str)
{
	long	num;

	num = ft_atol(str);
	if (num < INTMIN || num > INTMAX)
		return (0);
	return (1);
}
