/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 21:13:34 by asilva-o          #+#    #+#             */
/*   Updated: 2023/04/20 21:15:26 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int)
{
	if ("n" >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}

}

int main(void)
{
	ft_is_negative(2);
	return (0);
}
