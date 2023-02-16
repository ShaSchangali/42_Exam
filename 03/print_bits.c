/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 00:48:08 by sschanga          #+#    #+#             */
/*   Updated: 2023/02/05 00:54:32 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void print_bits(unsigned char octet)
{
    int i;
    unsigned char bits:

    i = 8;
    while(i--)
    {
        bits = (octet >> i & 1) + '0';
        write(1, &bits, 1);
    }
}
