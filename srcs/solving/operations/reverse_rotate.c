/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:46:38 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/11 12:46:38 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/push_swap.h"

void	reverse_rotate_a(t_stack **st_a, int nb)
{
	t_stack	*tmp;
	t_stack	*new_last;

	if (!st_a)
		return ;
	tmp = stacklast(*st_a);
	new_last = *st_a;
	while (new_last->next != tmp)
		new_last = new_last->next;
	new_last->next = NULL;
	stackadd_front(st_a, tmp);
	if (nb != 1)
		ft_printf("rra\n");
}

void	reverse_rotate_b(t_stack **st_b, int nb)
{
	t_stack	*tmp;
	t_stack	*new_last;

	if (!st_b)
		return ;
	tmp = stacklast(*st_b);
	new_last = *st_b;
	while (new_last->next != tmp)
		new_last = new_last->next;
	new_last->next = NULL;
	stackadd_front(st_b, tmp);
	if (nb != 1)
		ft_printf("rrb\n");
}

void	reverse_rotate_r(t_stack **st_a, t_stack **st_b)
{
	if (!st_a || !st_b)
		return ;
	reverse_rotate_a(st_a, 1);
	reverse_rotate_a(st_b, 1);
	ft_printf("rrr\n");
}
