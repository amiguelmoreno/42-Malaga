/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:52:07 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 09:56:38 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while ((ss1[i] != '\0' || ss2[i] != '\0') && i < n)
	{
		if (ss1[i] > ss2[i])
			return (ss1[i] - ss2[i]);
		if (ss2[i] > ss1[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[];
	char	str2[];

	str1[] = "Hello ";
	str2[] = "Hello r";
	printf("%d\n", ft_strncmp(str1, str2, 7));
	printf("%d", strncmp(str1, str2, 7));
}
*/