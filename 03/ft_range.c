/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:48:07 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/07 23:20:02 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int *res;
	int size;
	int i;

	size = (end - start) + 1;
	res = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		res[i] = start[i];
		i++;
	}
	return (res);
}


