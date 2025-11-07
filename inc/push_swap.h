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

void	exit_error(void);

//STACK UTILS
t_stack	*create_stack(int nb);
t_stack	*stacklast(t_stack *stack);
void	stackadd_back(t_stack **main, t_stack *new);
void	stackadd_front(t_stack **stack, t_stack *new);
void	stackdelone(t_stack *stack);

#endif
