/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:09:18 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/23 20:10:28 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	m;
	unsigned int	c;

	i = 0;
	m = 0;
	c = 0;
	while (src[c] != '\0')
		c++;
	while (dest[m] != '\0')
		m++;
	while (src[i] != '\0' && (m + i + 1 < size))
	{
			dest[m + i] = src[i];
			i++;
	}
	dest[m + i] = '\0';
	if (size > m)
		return (m + c);
	else
		return (c + size);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = " con cebolla";
	char dest[100] = "Hello tortilla patatas";

	char src1[] = " con cebolla";
	char dest1[100] = "Hello tortilla patatas";

	printf("Mi función: \n");
	printf("%u\n", ft_strlcat(dest, src, 4));
	printf("%s\n", src);
	printf("%s\n", dest);
	printf("\n");
	printf("Prueba con funcion original: \n");
	printf("%lu\n", strlcat(dest1, src1, 4));	
	printf("%s\n", src);
	printf("%s\n", dest);
}
*/
