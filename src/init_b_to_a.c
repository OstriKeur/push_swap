/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:47:32 by smorin            #+#    #+#             */
/*   Updated: 2024/04/24 12:42:36 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	get_target_for_b(t_stack *a, t_stack *b)
{
	t_stack	*tmp_a;
	t_stack	*target;
	long	small;

	while (b)
	{
		small = 2147483648;
		tmp_a = a;
		while (tmp_a)
		{
			if (tmp_a->nbr < small && tmp_a->nbr > b->nbr)
			{
				small = tmp_a->nbr;
				target = tmp_a;
			}
			tmp_a = tmp_a->next;
		}
		if (small == 2147483648)
			b->target = ft_check_min(a);
		else
			b->target = target;
		b = b->next;
	}
}

void	ft_b_to_a(t_stack **a, t_stack **b)
{
	t_stack	*cheap;

	cheap = get_cheap(*b);
	move_to_top(b, cheap, 'b');
	move_to_top(a, (*b)->target, 'a');
	pa(a, b);
}

void	nodes_b(t_stack *a, t_stack *b)
{
	index_to_stack(a);
	index_to_stack(b);
	get_target_for_b(a, b);
	cost_b(a, b);
	cheap_node(b);
}
