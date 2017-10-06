/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 21:11:31 by gquesnot          #+#    #+#             */
/*   Updated: 2017/09/30 22:09:19 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s1[i] && i < len)
	{
		if (s1[i] == s2[j])
		{
			while (s2[j] == s1[i])
			{
				i = i + 1;
				j = j + 1;
				if (s2[j] == '\0')
					return (char *)(s1 + i - j);
			}
		}
		j = 0;
		i = i + 1;
	}
	return (NULL);
}

