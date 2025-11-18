/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:07:20 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/11 16:07:20 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort(t_stack **st_a, t_stack **st_b)
{
	size_t	length;

	length = stack_length(*st_a);
	if (length <= 1)
		return ;
	if (length == 2)
	{
		if ((*st_a)-> idx == 2)
			rotate_a(st_a, 0);
	}
	else if (length == 3)
		sort_three(st_a);
	else if (length <= 5)
		sort_five(st_a, st_b);
	else
		big_sort(st_a, st_b);
}
