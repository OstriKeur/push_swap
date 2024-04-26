/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:25:41 by alsiavos          #+#    #+#             */
/*   Updated: 2024/04/26 16:03:36 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
split_arg si j'ai que 2 argument ./push_swap "23 45 64"
skip les espaces et on check double check int et number
*/

void	split_arg(char **v)
{
	int		i;
	int		j;
	char	**args;

	i = 1;
	while (v[i])
	{
		args = ft_split(v[i], ' ');
		j = 0;
		while (args[j])
		{
			if (!ft_number(args[j]) || !check_int(args[j]) || !ft_double(args
					- 1))
				(ft_free_split(args), ft_error());
			check_int(args[j]);
			j++;
		}
		ft_free_split(args);
		i++;
	}
}
/* si j'ai plusieurs arguments comme ./push_swap 23 42 -42
on check tout les arguments.
*/

int	check_arg(char **v)
{
	int	i;

	i = 1;
	while (v[i])
	{
		if (!ft_double(v) || !ft_number(v[i]) || !check_int(v[i]))
			ft_error();
		i++;
	}
	return (1);
}

void	fill_stack_a(t_stack **a, char **v, int c)
{
	int	n;
	int	i;

	i = 0;
	if (c == 2)
		v = ft_split(v[i], ' ');
	while (v[i])
	{
		n = ft_atoi(v[i]);
		ft_add_back(a, ft_stack_new(n));
		i++;
	}
	if (c == 2)
		ft_free_split(v);
}
