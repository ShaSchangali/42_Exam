/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:22:59 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/29 20:52:53 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
			i++;
		i--;
		while ((argv[1][i] == ' ' || argv[1][i] == '\t') && i != 0)
			i--;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && i != 0)
			i--;
		if (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
