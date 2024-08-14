/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 14:03:07 by caroldos          #+#    #+#             */
/*   Updated: 2024/07/14 16:25:38 by caroldos         ###   ########.fr       */
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
			if ((c == 1 && l == 1) || (c == 1 && l == y))
				ft_putchar('A');
			else if ((c == x && l == 1) || (c == x && l == y))
				ft_putchar('C');
			else if ((c == 1) || (c == x) || (l == 1) || (l == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		c++;
		}
		ft_putchar('\n');
		l++;
	}
}
