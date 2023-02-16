/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 00:48:08 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/05 00:54:32 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i;
    unsigned char bits;

    i = 0;
    bits = 0;
    while(i > 0)
    {
        bits = bits * 2 + (octet % 2);
        bits = bits / 2;
    }
}





