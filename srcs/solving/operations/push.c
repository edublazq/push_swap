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

void	push_a(t_stack **st_a, t_stack **st_b)
{
	t_stack	*tmp;

	tmp = *st_b;
	*st_b = (*st_b)->next;
	stackadd_front(st_a, tmp);
	ft_printf("pa\n");
}

void	push_b(t_stack **st_b, t_stack **st_a)
{
	t_stack	*tmp;

	tmp = *st_a;
	*st_a = (*st_a)->next;
	stackadd_front(st_b, tmp);
	ft_printf("pb\n");
}
