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
	if ((*st_a)->value == 2)
	{
		if ((*st_a)->next->value == 1)
			swap_a(*st_a, 0);
		else if ((*st_a)->next->value == 3)
			reverse_rotate_a(st_a, 0);
	}
	else if ((*st_a)->value == 3)
	{
		if ((*st_a)->next->value == 1)
			rotate_a(st_a, 0);
		else if ((*st_a)->next->value == 2)
		{
			swap_a(*st_a, 0);
			reverse_rotate_a(st_a, 0);
		}
	}
	else if ((*st_a)->value == 1)
		if ((*st_a)->next->value == 3)
		{
			swap_a(*st_a, 0);
			rotate_a(st_a, 0);	
		}
}
