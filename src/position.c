/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:46:14 by smorin            #+#    #+#             */
/*   Updated: 2024/04/26 16:24:57 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_sign(char c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (1);
	else
		return (0);
}

int	mydigit(char c)
{
	return (c >= '0' && c <= '9');
}
/*check si j'ai que des numbers est pas d'autres character ou bien un signe
 en solo comme "23-4 -+ + - 10- etc.." */

int	ft_number(char *v)
{
	int	i;

	i = 0;
	if (ft_sign(v[0]) && v[1] != '\0')
		i++;
	while (v[i] && mydigit(v[i]))
		i++;
	if (v[i] != '\0' && !mydigit(v[i]))
		return (0);
	return (1);
}
/* check les doublons, et skip les 0 inutiles
comme "000002" avec atoi avec l'arguments suivant */

int	ft_double(char **v)
{
	int	i;
	int	j;

	i = 1;
	while (v[i])
	{
		j = i + 1;
		while (v[j])
		{
			if (ft_atoi(v[i]) == ft_atoi(v[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_int(char *v)
{
	int		len;
	long	value;
	int		i;

	i = 0;
	while (v[i] == '0')
		i++;
	len = ft_strlen(&v[i]);
	value = ft_atol(v);
	if (len > 11 || value < INTMIN)
		return (0);
	if (len > 11 || value > INTMAX)
		return (0);
	return (1);
}
