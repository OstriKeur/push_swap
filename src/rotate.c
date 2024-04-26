/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:19:07 by smorin            #+#    #+#             */
/*   Updated: 2024/04/20 13:07:32 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate(t_stack **top)
{
	t_stack	*tmp;

	tmp = *top;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *top;
	*top = (*top)->next;
	tmp->next->next = NULL;
}

void	ft_printlist(t_stack *s)
{
	ft_printf("a : \n");
	while (s)
	{
		ft_printf("%d\n", s->nbr);
		s = s->next;
	}
}

void	ra(t_stack **head_a)
{
	rotate(head_a);
	ft_printf("ra\n");
}

void	rb(t_stack **head_b)
{
	rotate(head_b);
	ft_printf("rb\n");
}

void	rr(t_stack **head_a, t_stack **head_b)
{
	ra(head_a);
	rb(head_b);
	ft_printf("rr\n");
}
