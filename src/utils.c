/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:55:30 by smorin            #+#    #+#             */
/*   Updated: 2024/04/20 13:08:00 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	stack_size(t_stack *a)
{
	int	compt;

	compt = 0;
	while (a)
	{
		compt++;
		a = a->next;
	}
	return (compt);
}

void	index_to_stack(t_stack *stack)
{
	int	i;
	int	mediane;

	i = 0;
	if (!stack)
		return ;
	mediane = stack_size(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= mediane)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		i++;
	}
}

t_stack	*get_cheap(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	move_to_top(t_stack **stack, t_stack *node, char call)
{
	while (*stack != node)
	{
		if (call == 'a')
		{
			if (node->above_median)
				ra(stack);
			else
				rra(stack);
		}
		else if (call == 'b')
		{
			if (node->above_median)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

void	move_min_to_top(t_stack **stack)
{
	while ((*stack)->nbr != ft_check_min(*stack)->nbr)
	{
		if (ft_check_min(*stack)->above_median)
			ra(stack);
		else
			rra(stack);
	}
}
