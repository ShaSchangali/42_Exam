/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/02/07 22:48:07 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/07 23:20:02 by sschanga         ###   ########.fr       */
=======
/*   Created: 2023/02/15 18:31:43 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/15 18:38:17 by sschanga         ###   ########.fr       */
>>>>>>> c049a1fc280b83d62d1c013f0c35cebe32b82470
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

<<<<<<< HEAD
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
=======
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
>>>>>>> c049a1fc280b83d62d1c013f0c35cebe32b82470
		i++;
	}
	return (res);
}
<<<<<<< HEAD


=======
>>>>>>> c049a1fc280b83d62d1c013f0c35cebe32b82470
