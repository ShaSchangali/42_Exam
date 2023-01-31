/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 00:12:14 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/27 00:43:21 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void repeat_alpha(char *str)
{
	int	i;
	int	letter;

	i = 0;
	while	(str[i] != '\0')
	{
		letter = 0;
		if (str[i] >= 'A' && str[i] <= 'Z')
			letter = str[i] - 64;
		else if (str[i] >= 'a' && str[i] <= 'z')
			letter = str[i] - 96;
		else
			letter = 1;
		while(letter--)
			write(1, &str[i], 1);
		i++;
	}	
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write (1, "\n", 1);
	return (0);
}