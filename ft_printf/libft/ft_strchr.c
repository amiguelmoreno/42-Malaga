/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:12:56 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 09:56:21 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)str);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main (void)
{
    const char *str;
	int	c;

    
    str = "me voy a caer de la mesa";
    c = 'a';
    printf("%s\n", strchr(str, c));
    printf("%s\n", ft_strchr(str, c));
    return (0);
}
*/