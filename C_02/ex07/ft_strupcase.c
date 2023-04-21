/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:26:53 by asilva-o          #+#    #+#             */
/*   Updated: 2023/03/27 12:50:56 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while ((str[i] != '\0'))
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
			i++;
	}
	return (str);
}

/*int	main(void)
{
	char a [] = "beautyfull";

	printf("%s", ft_strupcase(a));
	return (0);
}
*/
