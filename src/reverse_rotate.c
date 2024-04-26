/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:36:57 by smorin            #+#    #+#             */
/*   Updated: 2024/04/20 13:07:10 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rrotate(t_stack **floor)
{
	t_stack	*last;
	t_stack	*tmp;

	tmp = *floor;
	while (tmp->next != NULL)
	{
		last = tmp;
		tmp = tmp->next;
	}
	last->next = NULL;
	tmp->next = *floor;
	*floor = tmp;
}

void	rra(t_stack **head_a)
{
	rrotate(head_a);
	ft_printf("rra\n");
}

void	rrb(t_stack **head_b)
{
	rrotate(head_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **head_a, t_stack **head_b)
{
	rra(head_a);
	rrb(head_b);
	ft_printf("rrr\n");
}
