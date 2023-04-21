/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 22:35:11 by asilva-o          #+#    #+#             */
/*   Updated: 2023/03/29 15:50:56 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)

{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1[] = "hola";
	char	s2[] = "hola";

	printf("%i", ft_strcmp(s1, s2));
	printf("\n%i", strcmp(s1, s2));
	return (0);
}
*/
