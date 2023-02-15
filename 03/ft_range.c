/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:31:43 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/15 18:38:17 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i;
	int size;
	int *res;
	
	size = (end - start) + 1;
	res = (int*)malloc(sizeof(int) * size);
	i = 0;
	while(i < size)
	{
		res[i] = start + i;
		i++;
	}
	return (res);
}
