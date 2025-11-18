/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:14:51 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/07 12:14:52 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*st_a;
	t_stack	*st_b;

	if (ac < 2)
		exit(1);
	st_a = NULL;
	st_b = NULL;
	parse_all(&st_a, &st_b, ac, av);
	if (index_stack(&st_a))
		free_exit(&st_a, &st_b, 1);
	sort(&st_a, &st_b);
	free_stack(st_a);
	free_stack(st_b);
	return (0);
}
