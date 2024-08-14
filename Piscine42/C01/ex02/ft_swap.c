/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:12:05 by caroldos          #+#    #+#             */
/*   Updated: 2024/07/18 14:23:14 by caroldos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	var;

	var = *a;
	*a = *b;
	*b = var;
}
/*
int	main(void)
{
	int	a;

	int	b;

	a = 42;
	b = 24;
	printf ("Antes: a = %d e b = %d\n", a, b);
	ft_swap(&a, &b);
	printf ("Depois: a = %d e b = %d\n", a, b);
	return (0);
}
*/
