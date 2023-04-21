/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:42:29 by asilva-o          #+#    #+#             */
/*   Updated: 2023/03/27 17:26:05 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int	i;
	int	n;

	i = 0;
	while (i < (size / 2))
	{
		n = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = n;
		i++;
	}
}

int	main(void)

{
	int tab[7] = {0, 1, 2, 3, 4, 5, 6};
	int size = 7;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4],
	tab[5], tab[6]);
	return (0);
}
