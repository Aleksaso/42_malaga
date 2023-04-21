/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 08:56:43 by asilva-o          #+#    #+#             */
/*   Updated: 2023/03/30 02:31:30 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while ((str[i] != '\0'))
	{
		x = 0;
		while ((str[i + x] == to_find[x]) && (to_find[x] != '\0'))
		{
			x++;
		}
		if (to_find[x] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

/*int	main()
{
	char	str[] = "busca te encontre";
	char	to_find[] = "te";

	printf("%s", ft_strstr(str, to_find));
	//printf("%s", strstr(str, to_find));
	return (0);
}
*/
