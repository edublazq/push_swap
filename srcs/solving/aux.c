/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:49:50 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/17 14:49:51 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	ft_sqrt(int nb)
{
	int	final;

	if (nb <= 0)
		return (0);
	final = 1;
	while (final * final <= nb)
		final++;
	return (final - 1);
}

int	get_rot_cost(t_stack *stack, int nb)
{
	int	cost;

	cost = 0;
	while (stack && stack->idx != nb)
	{
		stack = stack->next;
		cost++;
	}
	return (cost);
}

int	get_rev_rot_cost(t_stack *stack, int nb)
{
	return ((int)stack_length(stack) - get_rot_cost(stack, nb));
}
