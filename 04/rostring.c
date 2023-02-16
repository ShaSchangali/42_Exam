/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:19:31 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/15 22:39:55 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int flag;
	int start;
	int end;
	
	if (argc > 1)
	{
		i = 0;
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		start = i;
		while(argv[1][i] != '\0' && argv[1][i] != '\t' && argv[1][i] != ' ')
			i++;
		end = i;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while(argv[1][i])
		{			
			while(argv[1][i] == ' ' && argv[1][i + 1] == ' ' 
				|| argv[1][i] == '\t' && argv[1][i + 1] ==  '\t')
				i++;
			if(argv[1][i] == ' ' || argv[1][i] == '\t')
				flag = 1;
			write(1, &argv[1][i], 1);
			i++;
		}
		if(flag == 1)
			write(1, " ", 1);
		while(start < end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}

		if(flag == 1)
			write(1, " ", 1);
	}
	write(1, "\n", 1);
	return(0);
}


