/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:37:47 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/17 14:37:48 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	push_to_b(t_stack **st_a, t_stack **st_b)
{
	int	small_pivot;
	int	big_pivot;

	small_pivot = 0;
	big_pivot = ft_sqrt(stack_length(*st_a)) * 1.4;
	while ((*st_a))
	{
		if ((*st_a)->idx <= small_pivot)
		{
			push_b(st_b, st_a, 0);
			if (stack_length(*st_b) > 1)
				rotate_b(st_b, 0);
			small_pivot++;
		}
		else if ((*st_a)->idx <= small_pivot + big_pivot)
		{
			push_b(st_b, st_a, 0);
			small_pivot++;
		}
		else
			rotate_a(st_a, 0);
	}
}

static void	back_to_black(t_stack **st_a, t_stack **st_b)
{
	int	reverse_cost;
	int	cost;

	while (*st_b)
	{
		cost = get_rot_cost(*st_b, (int)stack_length(*st_b));
		reverse_cost = get_rev_rot_cost(*st_b, (int)stack_length(*st_b));
		if (cost <= reverse_cost)
		{
			while ((*st_b)->idx != (int)stack_length(*st_b))
				rotate_b(st_b, 0);
			push_a(st_a, st_b, 0);
		}
		else
		{
			while ((*st_b)->idx != (int)stack_length(*st_b))
				reverse_rotate_b(st_b, 0);
			push_a(st_a, st_b, 0);
		}
	}
}

void	big_sort(t_stack **st_a, t_stack **st_b)
{
	push_to_b(st_a, st_b);
	back_to_black(st_a, st_b);
}
