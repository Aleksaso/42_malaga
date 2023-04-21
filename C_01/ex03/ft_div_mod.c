/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:08:42 by asilva-o          #+#    #+#             */
/*   Updated: 2023/03/24 21:53:13 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
*div = a / b;
*mod = a % b;
}
/*
int main()
{
    int a;
    int b;

    a = 31;
    b = 3;
    printf("\n%d %d", a, b);
    ft_div_mod(a, b, &a, &b);
    printf("\n%d %d", a, b);
}
*/