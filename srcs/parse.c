/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:04:38 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/11 13:04:38 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	parse_all(t_stack **st_a, t_stack **st_b, int ac, char **av)
{
	t_stack	*new;
	int		err;
	int		i;

	i = 1;
	while (i < ac)
	{
		new = create_stack(ft_atoi(av[i], &err));
		if (err == 1)
			free_exit(st_a, st_b);
		stackadd_back(st_a, new);
		new = NULL;
		i++;
	}
}
