/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:28:17 by smorin            #+#    #+#             */
/*   Updated: 2024/04/20 13:06:41 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (stack_size(*a) == 2)
		sa(a);
	else if (stack_size(*a) == 3)
		sort_three(a);
	else
	{
		sort_all(a, &b);
		move_min_to_top(a);
	}
}

void	sort_three(t_stack **a)
{
	t_stack	*max_node;

	max_node = ft_check_max(*a);
	if (*a == max_node)
		ra(a);
	else if ((*a)->next == max_node)
		rra(a);
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a);
}

void	sort_all(t_stack **a, t_stack **b)
{
	int	size_a;

	size_a = stack_size(*a);
	if (size_a-- > 3 && !check_sort(*a))
		pb(b, a);
	if (size_a-- > 3 && !check_sort(*a))
		pb(b, a);
	while (size_a-- > 3 && !check_sort(*a))
	{
		nodes_a(*a, *b);
		ft_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		nodes_b(*a, *b);
		ft_b_to_a(a, b);
	}
	index_to_stack(*a);
}
