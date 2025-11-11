/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:38:51 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/11 14:38:52 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_stack	**free_stack(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (*stack)
	{
		*stack = tmp;
		tmp = (*stack)->next;
		free(*stack);
	}
	*stack = NULL;
	free(stack);
	stack = NULL;
	return (stack);
}
