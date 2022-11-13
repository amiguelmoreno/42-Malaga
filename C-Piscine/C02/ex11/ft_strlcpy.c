/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:39:51 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/21 18:20:49 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	a;

	a = 0;
	i = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	while (i < size)
	{
		if (size == 0)
			return (a);
		else
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (i == size)
		dest[i] = '\0';
	return (a);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Dala duro pa'";
	char dest[] = "Plata o plomo chingado";

	printf("%s\n", dest);
	printf("%d\n", ft_strlcpy(dest, src, 5));
	printf("%s\n", dest);	
}
*/
