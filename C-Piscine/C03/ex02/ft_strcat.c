/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:54:00 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/23 18:16:50 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	m;

	i = 0;
	m = 0;
	while (dest[m] != '\0')
		m++;
	while (src[i] != '\0')
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

printf("%s", ft_strcat(dest, src));
}
*/
