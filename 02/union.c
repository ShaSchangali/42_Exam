/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:24:47 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/02 22:46:47 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *str, int c, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
			i++;
		while (argv[2][j] != '\0')
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		i--;
		while(k <= i)
		{
			if (check(argv[1], argv[1][k], k) == 1)
				write(1, &argv[1][k], 1);
			k++;
		}
	}	
	write (1, "\n", 1);
	return (0);
}
