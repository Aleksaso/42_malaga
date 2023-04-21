/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:59:20 by asilva-o          #+#    #+#             */
/*   Updated: 2023/03/29 23:27:47 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[x] != '\0') && (x < nb))
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = 0;
	return (dest);
}

/*int	main()
{
	char	dest[] = "aleks";
	char	src[] = "silva";

	printf("%s", ft_strncat(dest, src, 5));
	return (0);
}
*/
