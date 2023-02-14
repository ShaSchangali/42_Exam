/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:48:07 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/07 23:20:02 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int sign;
	int size;
	int *res;
	int i;

	size = (end - start) + 1;
	res = malloc(sizeof(int) * size);
	if (start > end)
		sign = 1;
	else
		sign = -1;
	i = 0;
	while (i < size)
	{
		res[i] = end;
		end = end + sign;
		i++;
	}
	return (res);
}

