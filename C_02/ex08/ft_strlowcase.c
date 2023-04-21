/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:01:47 by asilva-o          #+#    #+#             */
/*   Updated: 2023/03/27 12:52:39 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while ((str[i] >= '\0'))
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
			i++;
	}
	return (str);
}

/*int	main(void)
{
	char a [] = "NATURALEZA";
	printf("%s", ft_strlowcase(a));
	return (0);
}
*/
