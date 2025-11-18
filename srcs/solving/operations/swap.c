/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:46:27 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/10 09:46:28 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/push_swap.h"

void	swap_a(t_stack *st_a, int nb)
{
	t_stack	*next;
	int		tmp;

	if (!st_a->next)
		return ;
	next = st_a->next;
	tmp = st_a->value;
	st_a->value = next->value;
	next->value = tmp;
	if (nb != 1)
		ft_printf("sa\n");
}

void	swap_b(t_stack *st_b, int nb)
{
	t_stack	*next;
	int		tmp;

	if (!st_b->next)
		return ;
	next = st_b->next;
	tmp = st_b->value;
	st_b->value = next->value;
	next->value = tmp;
	if (nb != 1)
		ft_printf("sb\n");
}

void	swap_s(t_stack *st_a, t_stack *st_b, int nb)
{
	swap_a(st_a, 1);
	swap_b(st_b, 1);
	if (nb != 1)
		ft_printf("ss\n");
}
