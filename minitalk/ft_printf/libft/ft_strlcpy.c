/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:43:19 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 09:57:05 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	a;

	a = 0;
	i = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size)
		dest[i] = '\0';
	return (a);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[];
	char	dest[];
	char	src1[];
	char	dest1[];

	src[] = "Dale duro padre'";
	dest[] = "Plata o plomo chingado";
	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcpy(dest, src, 10));
	printf("%s\n", dest);
	printf("%s\n", src);
    src1[] = "Dale duro padre'";
	dest1[] = "Plata o plomo chingado";
	printf("%s\n", src1);
	printf("%s\n", dest1);
	printf("%zu\n", ft_strlcpy(dest1, src1, 10));
	printf("%s\n", dest1);	
	printf("%s\n", src1);
}
*/