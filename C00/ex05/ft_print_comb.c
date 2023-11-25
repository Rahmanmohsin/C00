/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohrahma <mohrahma@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 23:48:31 by mohrahma          #+#    #+#             */
/*   Updated: 2023/11/24 23:48:31 by mohrahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    print_results(int i, int j, int k)
{
    i = i + 48;
    j = j + 48;
    k = k + 48;
    write(1, &i, 1);
    write(1, &j, 1);
    write(1, &k, 1);
    if (!(i == 55 && j == 56 && k == 57))
        write(1, ", ", 2);
}

void    ft_print_comb(void)
{
    int i;
    int j;
    int k;

    i = 0;
    while(i < 8)
    {
        j = i + 1;
        while(j < 9)
        {
            k = j + 1;
            while(k < 10)
            {
                print_results(i, j, k);
                k++;
            }
            j++;
        }
        i++;
    }
}
