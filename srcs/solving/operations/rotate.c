/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:41:02 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/11 12:41:02 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/push_swap.h"

void	rotate_a(t_stack **st_a, int nb)
{
	t_stack	*tmp;

	tmp = *st_a;
	*st_a = (*st_a)->next;
	stackadd_back(st_a, tmp);
	tmp->next = NULL;
	if (nb != 1)
		ft_printf("ra\n");
}

void	rotate_b(t_stack **st_b, int nb)
{
	t_stack	*tmp;

	tmp = *st_b;
	*st_b = (*st_b)->next;
	stackadd_back(st_b, tmp);
	tmp->next = NULL;
	if (nb != 1)
		ft_printf("rb\n");
}

void	rotate_r(t_stack **st_a, t_stack **st_b)
{
	rotate_a(st_a, 1);
	rotate_b(st_b, 1);
	ft_printf("rr\n");
}
