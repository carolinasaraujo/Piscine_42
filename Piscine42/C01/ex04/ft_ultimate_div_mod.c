/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:13:43 by caroldos          #+#    #+#             */
/*   Updated: 2024/07/21 16:39:03 by caroldos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	valora;
	int	valorb;

	valora = 42;
	valorb = 2;
	ft_ultimate_div_mod(&valora, &valorb);
	printf("Valor divisão:%i\n", valora);
	printf("Valor modulo:%i\n", valorb);
	return (0);
}
*/
