/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:18:10 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/07 12:18:11 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include <stdio.h>
# include <stdint.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

typedef struct s_moves
{
	char			*move;
	struct s_moves	*next;
}					t_moves;

//STACK UTILS
t_stack	*create_stack(int nb);
t_stack	*stacklast(t_stack *stack);
void	stackadd_back(t_stack **main, t_stack *new);
void	stackadd_front(t_stack **stack, t_stack *new);
void	stackdelone(t_stack *stack);
t_stack	*free_stack(t_stack *stack);

//OPERATIONS
void	push_a(t_stack **st_a, t_stack *st_b);
void	push_b(t_stack **st_b, t_stack *st_a);
void	rotate_a(t_stack **st_a, int nb);
void	rotate_b(t_stack **st_b, int nb);
void	rotate_r(t_stack **st_a, t_stack **st_b);
void	swap_a(t_stack *st_a, int nb);
void	swap_b(t_stack *st_b, int nb);
void	swap_s(t_stack *st_a, t_stack *st_b);
void	reverse_rotate_a(t_stack **st_a, int nb);
void	reverse_rotate_b(t_stack **st_b, int nb);
void	reverse_rotate_r(t_stack **st_a, t_stack **st_b);

//MAIN FUNCTIONS
void	parse_all(t_stack **st_a, t_stack **st_b, int ac, char **av);

//EXIT AND ERRORS
void	free_exit(t_stack **st_a, t_stack **st_b, int nb);
void	exit_error(void);

#endif
