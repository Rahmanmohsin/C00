/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohrahma <mohrahma@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:19:49 by mohrahma          #+#    #+#             */
/*   Updated: 2023/11/25 17:19:49 by mohrahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    put_nbr(int nb)
{
    int value;

    if (nb > 9)
        put_nbr(nb / 10);
    value = (nb % 10) + 48;
    write(1, &value, 1);
}

void    formatter(int i, int j)
{
    if(i < 10)
        write(1, "0", 1);
    put_nbr(i);
    write(1, " ", 1);
    if(j < 10)
        write(1, "0", 1);
    put_nbr(j);
    if(!(i == 98 && j == 99))
        write(1, ", ", 2);
}

void    ft_print_comb2(void)
{
    int i;
    int j;

    i = 0;
    while(i < 99)
    {
        j = i + 1;
        while(j < 100)
        {
            formatter(i, j);
            j++;
        }
        i++;
    }
}
