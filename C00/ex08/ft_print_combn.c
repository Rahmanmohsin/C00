/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohrahma <mohrahma@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:48:56 by mohrahma          #+#    #+#             */
/*   Updated: 2023/11/25 17:48:56 by mohrahma         ###   ########.fr       */
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

int    ft_putnbr(int nb, int n)
{
    int i;
    int j;
    char values[9];

    i = 0;
    while(i < n)
    {
        values[i] = nb % 10;
        nb = nb / 10;
        i++;
    }
    i = 0;
    while(i < n)
    {
        j = i + 1;
        while(j < n)
        {
            if(values[i] <= values[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}


void    ft_print_combn(int n)
{
    int max;
    int devisor;
    int i;

    i = 1;
    max = 1;
    devisor = 1;
    while(i <= n)
    {
        max = max * 10 - (n - i);
        devisor = devisor * 10;
        i++;
    }
    i = 1;
    while (i < max)
    {
        if ((i/(devisor/10) == 0) && ft_putnbr(i, n))
            write(1, "0", 1);
        if(ft_putnbr(i, n))
            put_nbr(i);
        if ((i != max - 1) && ft_putnbr(i, n))
            write(1, ", ", 2);
        i++;
    }
}
