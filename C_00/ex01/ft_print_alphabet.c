/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:33:20 by asilva-o          #+#    #+#             */
/*   Updated: 2023/03/15 18:30:49 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	int ft_print_alphabet;

	ft_print_alphabet = 'a';

	while (ft_print_alphabet <= 'z')

	{
		write(1, &ft_print_alphabet, 1);
		ft_print_alphabet++;
	}
}
int	main(void)
{
	ft_print_alphabet();
	return (0);
}