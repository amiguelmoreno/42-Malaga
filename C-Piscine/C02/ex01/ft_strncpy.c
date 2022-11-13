/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:19:29 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/20 12:26:24 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "La salchipapa";
	char dest[] = "Mi libro luna de plutón";

	ft_strncpy(dest, src, 10);
	printf("%s", dest);
	printf("\n");
	printf("%c", dest[5]);
	printf("\n");
	return (0);
}
*/
