/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:51:44 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 09:56:29 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s1ands2;
	int		length;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	length = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	s1ands2 = malloc(sizeof(char) * (length + 1));
	if (!s1ands2)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s1ands2[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s1ands2[i + j] = s2[j];
		j++;
	}
	s1ands2[i + j] = '\0';
	return (s1ands2);
}

/*
#include <stdio.h>


int	main(void)
{
	char const	*str;
	char const	*str2;

    str = "Flamenco";
    str2 = "Rosa";
    printf("%s", ft_strjoin(str, str2));
}
*/