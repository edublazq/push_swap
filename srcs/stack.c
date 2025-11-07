/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:21:03 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/07 12:21:07 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list	**create_stacks(t_stack **stack)
{
	stack = ft_calloc(2, sizeof(t_stack *));
	if (!stack)
		error_exit();
	
}
