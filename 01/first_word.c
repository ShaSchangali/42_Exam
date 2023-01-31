/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:09:08 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/26 23:26:15 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(int i)
{
	if (i == '\t' || i == '\r' || i == '\v' || i == '\f' 
		|| i == '\n' || i == ' ')
		return (1);
	return (0);
}

int main (int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while(ft_isspace((argv[1][i])))
			i += 1;
		while(!(ft_isspace(argv[1][i])) && argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}