/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblazqu <edblazqu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:40:23 by edblazqu          #+#    #+#             */
/*   Updated: 2025/11/16 19:40:24 by edblazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	fill_array(t_stack *stack, int *arr)
{
	t_stack	*tmp;
	int		i;

	tmp = stack;
	i = 0;
	while (tmp)
	{
		arr[i] = tmp->value;
		i++;
		tmp = tmp->next;
	}
}

static void	bubble_sort(int *arr, size_t length)
{
	size_t	i;
	size_t	j;
	int		tmp;

	i = length;
	while (i > 0)
	{
		j = 1;
		while (j < i)
		{
			if (arr[j - 1] > arr[j])
			{
				tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i--;
	}
}

static void	set_index(int *arr, t_stack **st_a, size_t length)
{
	t_stack	*tmp;
	size_t	i;

	tmp = *st_a;
	while (tmp)
	{
		i = 0;
		while (i < length)
		{
			if (tmp->value == arr[i])
				tmp->idx = (int)i + 1;
			i++;
		}
		tmp = tmp->next;
	}
}

int	index_stack(t_stack **st_a)
{
	int		*arr;
	size_t	length;

	length = stack_length(*st_a);
	arr = ft_calloc(length, sizeof(int));
	if (!arr)
		return (1);
	fill_array(*st_a, arr);
	bubble_sort(arr, length);
	set_index(arr, st_a, length);
	return (0);
}
