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

static int64_t	ft_atoi_ps(const char *nptr, int *err)
{
	int64_t	nb;
	int		neg;
	size_t	i;

	nb = 0;
	i = 0;
	neg = 1;
	if (ft_strlen(nptr) >= 19)
		return (*err = 1, 0);
	while (ft_isspace(nptr[i]))
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	while (nptr[i])
	{
		if (nptr[i] < '0' || nptr[i] > '9')
			return (*err = 1, 0);
		nb = (nb * 10) + (nptr[i] - '0');
		i++;
	}
	return (nb * neg);
}

static int	search_num(t_stack **st_a, int nb)
{
	t_stack	*idx;

	if (!*st_a || !st_a)
		return (0);
	idx = *st_a;
	while (idx)
	{
		if (nb == idx->value)
			return (1);
		idx = idx->next;
	}
	return (0);
}

void	pick_num(t_stack **st_a, t_stack **st_b, char **split)
{
	size_t	i;
	int64_t	nb;
	t_stack	*new;
	int		err;

	i = 0;
	while (split[i])
	{
		err = 0;
		nb = ft_atoi_ps(split[i], &err);
		if (nb > INT_MAX || nb < INT_MIN || err == 1)
		{
			free_split(split);
			free_exit(st_a, st_b, 1);
		}
		if (search_num(st_a, nb))
		{
			free_split(split);
			free_exit(st_a, st_b, 1);
		}
		new = create_stack(nb);
		stackadd_back(st_a, new);
		new = NULL;
		i++;
	}
}

void	parse_all(t_stack **st_a, t_stack **st_b, int ac, char **av)
{
	int		i;
	int		j;
	char	**split;

	i = 1;
	while (i < ac)
	{
		j = 0;
		split = ft_split(av[i], ' ');
		if (!split)
			free_exit(st_a, st_b, 1);
		pick_num(st_a, st_b, split);
		free_split(split);
		i++;
	}
}

/* void	parse_all(t_stack **st_a, t_stack **st_b, int ac, char **av)
{
	t_stack		*new;
	int			err;
	int64_t		nb;
	int			i;

	i = 1;
	nb = 0;
	while (i < ac)
	{
		err = 0;
		nb = ft_atoi_ps(av[i], &err);
		if (nb > INT_MAX || nb < INT_MIN || err == 1)
			free_exit(st_a, st_b, 1);
		if (search_num(st_a, nb))
			free_exit(st_a, st_b, 1); //UTIL PERO NO CORRECTO
		new = create_stack(nb);
		stackadd_back(st_a, new);
		new = NULL;
		i++;
	}
} */
