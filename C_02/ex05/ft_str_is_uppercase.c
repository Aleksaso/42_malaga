/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 01:55:51 by asilva-o          #+#    #+#             */
/*   Updated: 2023/03/27 12:47:02 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while ((str[i] != '\0'))
	{
		if ((str[i] >= 65 && str[i] <= 90))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%i", ft_str_is_uppercase("FEFITO"));
	return (0);
}
*/
