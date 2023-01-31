/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:03:40 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/26 23:47:58 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/* NOT SUBMIT*/
#include <stdio.h>
int main()
{
	int a;
	int b;
	
	a = 2;
	b = 4;
	printf("%d %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d %d", a, b);
}

