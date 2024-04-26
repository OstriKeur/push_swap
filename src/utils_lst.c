/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:56:01 by smorin            #+#    #+#             */
/*   Updated: 2024/04/25 17:49:31 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	t_stack	*temp;

	if (!stack)
		return ;
	if (!*stack)
	{
		*stack = stack_new;
		return ;
	}
	else
		temp = *stack;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = stack_new;
}

t_stack	*ft_stack_new(long content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->nbr = content;
	new->next = NULL;
	return (new);
}

t_stack	*ft_last_node(t_stack *stack)
{
	while (stack->next != NULL)
	{
		stack = stack->next;
	}
	return (stack);
}

int	ft_checkdup(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->nbr == tmp->nbr)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}

int	ft_check_int(char *str)
{
	int	i;

	i = 1;
	if (!(str[0] == '+' || str[0] == '-' || ft_isdigit(str[0])))
		return (0);
	if (ft_strlen(str) < 2 && !(ft_isdigit(str[0])))
		return (0);
	if ((str[0] == '-' || str[0] == '+') && !(ft_isdigit(str[1])))
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
