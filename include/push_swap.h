/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:44:04 by smorin            #+#    #+#             */
/*   Updated: 2024/04/26 16:09:43 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <fcntl.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# define INTMAX 2147483647
# define INTMIN -2147483648

typedef struct s_stack
{
	long			nbr;
	int				index;
	bool			cheapest;
	bool			above_median;
	int				push_cost;
	struct s_stack	*target;
	struct s_stack	*next;

}					t_stack;

/// Parsing

int					ft_sign(char c);
int					mydigit(char c);
int					ft_number(char *v);
int					ft_double(char **v);
int					check_int(char *v);
void				split_arg(char **v);
int					check_arg(char **v);
void				fill_stack_a(t_stack **a, char **v, int c);
t_stack				*ft_stack_new(long content);
void				ft_add_back(t_stack **stack, t_stack *stack_new);
int					ft_checkdup(t_stack *a);
void				ft_error(void);
t_stack				*ft_last_node(t_stack *stack);
void				ft_free_split(char **split);
int					ft_check_int(char *str);
int					ft_check_size(char *str);

/// Free
void				ft_free_stack(t_stack **stack);
void				ft_freestr(char **lst);
void				free_all_and_error(t_stack *stack, char *s);
void				ft_freestack(t_stack *stack);

/// Operation
void				ft_printlist(t_stack *s);
void				rotate(t_stack **top);
void				rrotate(t_stack **floor);
void				swap(t_stack **swap);
void				push(t_stack **dst, t_stack **src);
t_stack				*ft_last_node(t_stack *stack);
void				ra(t_stack **head_a);
void				rb(t_stack **head_b);
void				rr(t_stack **head_a, t_stack **head_b);
void				rra(t_stack **head_a);
void				rrb(t_stack **head_b);
void				rrr(t_stack **head_a, t_stack **head_b);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **b, t_stack **a);

/// Algo
int					stack_size(t_stack *a);
void				sort(t_stack **a);
t_stack				*ft_check_max(t_stack *a);
t_stack				*ft_check_min(t_stack *a);
void				sort_three(t_stack **a);
bool				check_sort(t_stack *stack);
void				index_to_stack(t_stack *stack);
t_stack				*get_cheap(t_stack *stack);
void				move_to_top(t_stack **stack, t_stack *node, char call);
void				move_min_to_top(t_stack **stack);
void				get_target_for_a(t_stack *a, t_stack *b);
void				cheap_node(t_stack *stack);
void				nodes_a(t_stack *a, t_stack *b);
void				get_target_for_b(t_stack *a, t_stack *b);
void				nodes_b(t_stack *a, t_stack *b);
void				cost_b(t_stack *a, t_stack *b);
void				cost_a(t_stack *a, t_stack *b);
void				ft_a_to_b(t_stack **a, t_stack **b);
void				ft_b_to_a(t_stack **a, t_stack **b);
void				sort_all(t_stack **a, t_stack **b);

#endif
