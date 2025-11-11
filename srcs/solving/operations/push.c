/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:53:00 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/10 09:53:01 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/push_swap.h"

void	push_a(t_stack **st_a, t_stack *st_b)
{
	if (!st_a || !st_b)
		return ;
	stackadd_front(st_a, st_b);
}

void	push_b(t_stack **st_b, t_stack *st_a)
{
	if (!st_a || !st_b)
		return ;
	stackadd_front(st_b, st_a);
}
