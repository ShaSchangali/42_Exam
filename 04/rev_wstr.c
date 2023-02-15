/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:17:44 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/15 20:51:04 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int start;
	int end;
	int flag;
	int i;
	
	i = 0;
	if(argc == 2)
	{		
		while(argv[1][i] != '\0')
			i++;
		while(i >= 0)
		{
			while(argv[1][i] == '\0' || argv[1][i] == '\t' || argv[1][i] == ' ')
				i--;
			end = i;
			while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			start = i + 1;
			flag = start;
			while(start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			if(flag != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}

