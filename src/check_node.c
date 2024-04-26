/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:36:18 by smorin            #+#    #+#             */
/*   Updated: 2024/04/19 16:16:47 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	check_sort(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack && stack->next)
	{
		if (stack->nbr > stack->next->nbr)
			return (false);
		stack = stack->next;
	}
	return (true);
}

t_stack	*ft_check_max(t_stack *a)
{
	int		max;
	t_stack	*max_node;

	max = INTMIN;
	if (!a)
		return (NULL);
	while (a)
	{
		if (a->nbr >= max)
		{
			max = a->nbr;
			max_node = a;
		}
		a = a->next;
	}
	return (max_node);
}

t_stack	*ft_check_min(t_stack *a)
{
	int		min;
	t_stack	*min_nodes;

	min = INTMAX;
	if (!a)
		return (NULL);
	while (a)
	{
		if (a->nbr <= min)
		{
			min = a->nbr;
			min_nodes = a;
		}
		a = a->next;
	}
	return (min_nodes);
}
