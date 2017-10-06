/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 03:19:20 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/06 18:30:15 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "queen.h"

void		ft_print(int *t, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i <= size * 2)
	{
		ft_putstr("-");
		i = i + 1;
	}
	i = 0;
	ft_putstr("\n");
	while (i < size)
	{
		j = 0;
		while (j < t[i])
		{
			ft_putstr("| ");
			j = j + 1;
		}
		ft_putstr("|x");
		while (j < size)
		{
			ft_putstr("| ");
			j = j + 1;
		}
		ft_putstr("\n");
		i = i + 1;
	}
	i = 0;
	while (i <= size * 2)
	{
		ft_putstr("-");
		i = i + 1;
	}
	ft_putstr("\n");
}

