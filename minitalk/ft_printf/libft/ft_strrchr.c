/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:34:36 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 10:17:06 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main (void)
{
    const char *str;
	int	c;

    
    str = "me voy a caer de la mesa";
    c = 'w';
    printf("%s\n", strrchr(str, c));
    printf("%s\n", ft_strrchr(str, c));
    return (0);
}
*/