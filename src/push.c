/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:54:52 by smorin            #+#    #+#             */
/*   Updated: 2024/04/20 13:07:02 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push(t_stack **dst, t_stack **src)
{
	t_stack	*tmp_node;

	tmp_node = *src;
	*src = (*src)->next;
	if (*dst == NULL)
	{
		*dst = tmp_node;
		tmp_node->next = NULL;
	}
	else
	{
		tmp_node->next = *dst;
		*dst = tmp_node;
	}
}

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_printf("pa\n");
}

void	pb(t_stack **b, t_stack **a)
{
	push(b, a);
	ft_printf("pb\n");
}
