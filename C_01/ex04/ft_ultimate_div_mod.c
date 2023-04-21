/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:36:25 by asilva-o          #+#    #+#             */
/*   Updated: 2023/03/23 09:39:55 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rest;

	div = *a / *b;
	rest = *a % *b;
	*a = div;
	*b = rest;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 51;
	y = 2;
	printf("%i %i\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("%i %i\n", x, y);
}
*/