/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:26:18 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/07 12:26:19 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

void	exit_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	free_exit(t_stack **st_a, t_stack **st_b, int nb)
{
	*st_a = free_stack(*st_a);
	*st_b = free_stack(*st_b);
	if (nb == 1)
		exit_error();
	else
		exit(nb);
}
