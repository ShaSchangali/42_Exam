/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 23:11:25 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/27 23:21:42 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		max(int* tab, unsigned int len)
{
	int	max;
	int	i;

	max = tab[i];
	i = 0;
	while(i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

int main()
{
	int *tab;
	
	tab = (int*)malloc(sizeof(int) * 3);
	tab[0] = 5;
	tab[1] = 20;
	tab[2] = 15;

	printf("%d", max(tab, 3));
	return (0);
}
