/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:32:46 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/23 18:54:54 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				m;

	i = 0;
	m = 0;
	while (dest[m] != '\0')
		m++;
	while (src[i] != '\0' && i < nb)
	{
			dest[m] = src[i];
			m++;
			i++;
	}
	dest[m] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
char src[] = "Hello sfdasdfsda";
char dest[50] = "Hello tortilla paparewrw";

printf("%s", ft_strncat(dest, src, 5));
}
*/
