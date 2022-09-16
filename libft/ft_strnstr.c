/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:58:49 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 09:56:57 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	position;

	if (*needle == '\0')
		return ((char *)haystack);
	position = ft_strlen((char *)needle);
	while (*haystack != '\0' && len-- >= position)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, position) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char	*bigger;
	char	*small;
	char	*bigger1;
	char	*small1;

     bigger = "me voy a caer de la mesa";
     small = "c";
    
     bigger1 = "me voy a caer de la mesa";
     small1 = "c";
    
    printf("%s\n", strnstr(bigger, small, 13));
    printf("%s\n", ft_strnstr(bigger1, small1, 13));
    return (0);
}
*/