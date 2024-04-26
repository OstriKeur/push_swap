/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:34:07 by smorin            #+#    #+#             */
/*   Updated: 2024/04/24 18:04:50 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	cost_b(t_stack *a, t_stack *b)
{
	int	size_a;
	int	size_b;

	size_a = stack_size(a);
	size_b = stack_size(b);
	while (b)
	{
		b->push_cost = 0;
		if (b->above_median && b->target->above_median)
			b->push_cost = b->index + b->target->index;
		if (b->above_median && !(b->target->above_median))
			b->push_cost = b->index + (size_a - (b->target->index));
		if (!(b->above_median) && !(b->target->above_median))
			b->push_cost = (size_b - b->index) + (size_a - (b->target->index));
		if (!(b->above_median) && b->target->above_median)
			b->push_cost = (size_b - b->index) + b->target->index;
		b = b->next;
	}
}

void	cost_a(t_stack *a, t_stack *b)
{
	int	size_a;
	int	size_b;

	size_a = stack_size(a);
	size_b = stack_size(b);
	while (a)
	{
		a->push_cost = 0;
		if (a->above_median && a->target->above_median)
			a->push_cost = a->index + a->target->index;
		if (a->above_median && !(a->target->above_median))
			a->push_cost = a->index + (size_b - (a->target->index));
		if (!(a->above_median) && !(a->target->above_median))
			a->push_cost = (size_a - a->index) + (size_b - (a->target->index));
		if (!(a->above_median) && a->target->above_median)
			a->push_cost = (size_a - a->index) + a->target->index;
		a = a->next;
	}
}

int	min(t_stack *stack)
{
	int	i;

	i = stack->nbr;
	while (stack)
	{
		if (stack->nbr < i)
			i = stack->nbr;
		stack = stack->next;
	}
	return (i);
}

int	max(t_stack *stack)
{
	int	i;

	i = stack->nbr;
	while (stack)
	{
		if (stack->nbr > i)
			i = stack->nbr;
		stack = stack->next;
	}
	return (i);
}
