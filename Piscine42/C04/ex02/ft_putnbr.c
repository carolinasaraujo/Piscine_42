/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:56:30 by caroldos          #+#    #+#             */
/*   Updated: 2024/08/01 18:48:16 by caroldos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar ('-');
		ft_putchar ('2');
		ft_putnbr (147483648);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar ('-');
		n = -n;
		ft_putnbr (n);
	}
	else if (n > 9)
	{
		ft_putnbr (n / 10);
		ft_putnbr (n % 10);
	}
	else
		ft_putchar (n + 48);
}
/*
int main(void)
{
    
    ft_putnbr(42);
    ft_putchar('\n');

    
    ft_putnbr(-42);
    ft_putchar('\n');

   
    ft_putnbr(0);
    ft_putchar('\n');

    
    ft_putnbr(28367);
    ft_putchar('\n');

    
    ft_putnbr(-2147483648);
    ft_putchar('\n');

    return 0;
}*/
