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

	tmp = stacklast(*st_a);
	stackadd_front(st_a, tmp);
	tmp = stacklast(*st_a);
	tmp->next = NULL;
	if (nb != 1)
		ft_printf("rra\n");
}

void	reverse_rotate_b(t_stack **st_b, int nb)
{
	t_stack	*tmp;

	tmp = stacklast(*st_b);
	stackadd_front(st_b, tmp);
	tmp = stacklast(*st_b);
	tmp->next = NULL;
	if (nb != 1)
		ft_printf("rrb\n");
}

void	reverse_rotate_r(t_stack **st_a, t_stack **st_b)
{
	reverse_rotate_a(st_a, 1);
	reverse_rotate_a(st_b, 1);
	ft_printf("rrr\n");
}
