/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:08:38 by smorin            #+#    #+#             */
/*   Updated: 2024/04/24 12:42:43 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	get_target_for_a(t_stack *a, t_stack *b)
{
	t_stack	*tmp;
	t_stack	*target;
	long	small;

	while (a)
	{
		small = -2147483649;
		tmp = b;
		while (tmp)
		{
			if (tmp->nbr > small && tmp->nbr < a->nbr)
			{
				small = tmp->nbr;
				target = tmp;
			}
			tmp = tmp->next;
		}
		if (small == -2147483649)
			a->target = ft_check_max(b);
		else
			a->target = target;
		a = a->next;
	}
}

void	cheap_node(t_stack *stack)
{
	t_stack	*cheap_node;
	long	cheap_node_max;

	if (!stack)
		return ;
	cheap_node_max = 2147483648;
	while (stack)
	{
		stack->cheapest = false;
		if (stack->push_cost < cheap_node_max)
		{
			cheap_node_max = stack->push_cost;
			cheap_node = stack;
		}
		stack = stack->next;
	}
	cheap_node->cheapest = true;
}

void	ft_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cheap;

	cheap = get_cheap(*a);
	move_to_top(a, cheap, 'a');
	move_to_top(b, cheap->target, 'b');
	pb(b, a);
}

void	nodes_a(t_stack *a, t_stack *b)
{
	index_to_stack(a);
	index_to_stack(b);
	get_target_for_a(a, b);
	cost_a(a, b);
	cheap_node(a);
}
