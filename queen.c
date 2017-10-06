/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_safe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 01:01:14 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/06 03:51:22 by gquesnot         ###   ########.fr       */
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

void		set_queen(int *t, int x, int *res, void (*f)(int *))
{
	int		i;

	i = 0;
	if (x == 8)
	{
		*res = *res + 1;
		f(t);
	}
	else
	{
		while (i < 8)
		{
			if (ft_is_safe(t, x, i) == 1)
			{
				t[x] = i;
				set_queen(t, x + 1, res,(*f));
				t[x] = 0;
			}
			i = i + 1;
		}
	}
}

int			main(void)
{
	int		res;
	int		*t;

	t = malloc(8 * sizeof(int));
	res = 0;
	set_queen(t, 0, &res, &ft_print);
	ft_putstr("\nnombre de solution : ");
	ft_putnbr(res);
	ft_putchar('\n');
	free(t);
	return (0);
}
