/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:01:53 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/03 18:15:11 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
// include for size_t
// #include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while(s[i] != '\0')
	{
		while(reject[k] != '\0')
		{
			if (reject[k] == s[i])
				return (i);
			k++;
		}	
		k = 0;
		i++;
	}
	return (i);
}

int	main(void)
{
 	printf("%lu\n", ft_strcspn("test", "es"));
 	printf("%lu\n", strcspn("test", "es"));
 	printf("%lu\n", ft_strcspn("test", "f"));
 	printf("%lu\n", strcspn("test", "f"));
}
