/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:33:57 by asilva-o          #+#    #+#             */
/*   Updated: 2023/04/20 11:29:09 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	int	ft_print_reverse_alphabet;

	ft_print_reverse_alphabet = 'z';
	while (ft_print_reverse_alphabet >= 'a')

	{
		write(1, &ft_print_reverse_alphabet, 1);
		ft_print_reverse_alphabet--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
