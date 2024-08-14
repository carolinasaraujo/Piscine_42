/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroldos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:13:50 by caroldos          #+#    #+#             */
/*   Updated: 2024/07/18 19:04:28 by caroldos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int*mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	valora;
	int	valorb;

	valora = 42;
	valorb = 2;

	int div;
	int mod;

	int	*divisao = &div;
	int	*modulo = &mod;

	ft_div_mod(valora, valorb, divisao, modulo);

        printf("Valor da divisão:%i\n", *divisao);
	printf("Valor do modulo:%i\n", *modulo);

	return (0);	
}
*/
