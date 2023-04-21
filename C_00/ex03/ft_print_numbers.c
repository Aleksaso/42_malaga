/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:33:44 by asilva-o          #+#    #+#             */
/*   Updated: 2023/03/23 21:10:19 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	int	ft_print_numbers;

	ft_print_numbers = '0';

	while (ft_print_numbers <= '9')
	{
		write(1, &ft_print_numbers, 1);
		ft_print_numbers++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
