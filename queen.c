/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_safe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 01:01:14 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/06 18:31:58 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "queen.h"

int			ft_is_safe(int *t, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < x)
	{
		j = t[i];
		if ((ABS(x - i) == ABS(y - j)) || y == j)
			return (0);
		i = i + 1;
	}
	return (1);
}

void		set_queen(int *t, int x, int *res, int size)
{
	int		i;

	i = 0;
	if (x == size)
	{
		*res = *res + 1;
		ft_print(t, size);
	}
	else
	{
		while (i < size)
		{
			if (ft_is_safe(t, x, i) == 1)
			{
				t[x] = i;
				set_queen(t, x + 1, res, size);
				t[x] = 0;
			}
			i = i + 1;
		}
	}
}

int			main(int ac, char **av)
{
	int		res;
	int		*t;
	int		size;

	if(ac == 1)
		size = 8;
	else if(ac == 2)
		size = ft_atoi(av[1]);
	else 
		return (0);
	t = malloc(size * sizeof(int));
	res = 0;
	set_queen(t, 0, &res, size);
	ft_putstr("\nnombre de solution : ");
	ft_putnbr(res);
	ft_putchar('\n');
	free(t);
	return (0);
}
