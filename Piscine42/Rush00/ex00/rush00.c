/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:17:33 by caroldos          #+#    #+#             */
/*   Updated: 2024/07/14 18:39:25 by caroldos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	c;
	int	l;

	l = 1;
	while (l <= y && x > 0)
	{
	c = 1;
		while (c <= x)
		{
			if ((c == 1 && l == 1) || (c == x && l == 1))
				ft_putchar('o');
			else if ((c == 1 && l == y) || (c == x && l == y))
				ft_putchar('o');
			else if ((l == 1) || (l == y))
				ft_putchar('-');
			else if ((c == 1) || (c == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
