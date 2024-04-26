/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:23:53 by smorin            #+#    #+#             */
/*   Updated: 2024/04/20 13:06:56 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_stack **swap)
{
	t_stack	*tmp;

	tmp = *swap;
	*swap = (*swap)->next;
	tmp->next = (*swap)->next;
	(*swap)->next = tmp;
}

void	sa(t_stack **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	swap(b);
	ft_printf("sa\n");
}

void	ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
	ft_printf("ss\n");
}
