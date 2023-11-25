/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohrahma <mohrahma@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:41:28 by mohrahma          #+#    #+#             */
/*   Updated: 2023/11/25 17:41:28 by mohrahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int nb)
{
    int value;

    if(nb == -2147483648)
        write(1, "-2147483648", 11);
    else
    {
        if(nb < 0)
        {
            nb = -nb;
            write(1, "-", 1);
        }
        if (nb > 9)
            ft_putnbr(nb / 10);
        value = (nb % 10) + 48;
        write(1, &value, 1);
    }
}
