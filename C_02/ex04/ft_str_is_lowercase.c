/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 01:49:37 by asilva-o          #+#    #+#             */
/*   Updated: 2023/03/27 12:46:11 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while ((str[i] != '\0'))
	{
		if ((str[i] >= 97 && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%i", ft_str_is_lowercase("mlg"));
	return (0);
}
*/
