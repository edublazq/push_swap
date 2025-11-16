/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:21:03 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/07 12:21:07 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_stack	*create_stack(int nb)
{
	t_stack	*new;

	new = ft_calloc(1, sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = nb;
	new->next = NULL;
	return (new);
}

t_stack	*stacklast(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return (NULL);
	tmp = stack;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

void	stackadd_back(t_stack **main, t_stack *new)
{
	t_stack	*idx;

	if (!main || !new)
		return ;
	if (*main == NULL)
	{
		*main = new;
		return ;
	}
	idx = stacklast(*main);
	idx->next = new;
}

void	stackadd_front(t_stack **stack, t_stack *new)
{
	if (!stack || !new)
		return ;
	new->next = *stack;
	*stack = new;
}

void	stackdelone(t_stack *stack)
{
	if (!stack)
		return ;
	free(stack);
	stack = NULL;
}
