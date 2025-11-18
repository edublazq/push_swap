/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minor_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:39:13 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/16 19:39:14 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_three(t_stack **st_a)
{
	if ((*st_a)->idx == 2)
	{
		if ((*st_a)->next->idx == 1)
			swap_a(*st_a, 0);
		else if ((*st_a)->next->idx == 3)
			reverse_rotate_a(st_a, 0);
	}
	else if ((*st_a)->idx == 3)
	{
		if ((*st_a)->next->idx == 1)
			rotate_a(st_a, 0);
		else if ((*st_a)->next->idx == 2)
		{
			swap_a(*st_a, 0);
			reverse_rotate_a(st_a, 0);
		}
	}
	else if ((*st_a)->idx == 1)
	{
		if ((*st_a)->next->idx == 3)
		{
			swap_a(*st_a, 0);
			rotate_a(st_a, 0);
		}
	}
}

void	sort_five(t_stack **st_a, t_stack **st_b)
{
	while (stack_length(*st_a) > 3)
	{
		if ((*st_a)->idx > 3)
			push_b(st_b, st_a, 0);
		else
			rotate_a(st_a, 0);
	}
	sort_three(st_a);
	if ((*st_b)->idx == 5)
		rotate_b(st_b, 0);
	while ((*st_b) != NULL)
	{
		push_a(st_a, st_b, 0);
		rotate_a(st_a, 0);
	}
}
