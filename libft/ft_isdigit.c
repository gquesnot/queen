/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 22:32:31 by gquesnot          #+#    #+#             */
/*   Updated: 2017/09/30 22:33:46 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isdigit(int c)
{
	char c1;

	c1 = (char)c;
	if (c1 <= '9' && c1 >= '0')
		return (1);
	else
		return (0);
}
