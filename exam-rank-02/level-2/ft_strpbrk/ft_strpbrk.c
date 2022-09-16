/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:42:25 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/20 19:15:39 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	find_char(const char *str1, const char *str2)
{
	while (*str2 != 0)
	{
		if (*str2 == *str1)
			return (1);
		str2++;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1 != 0)
	{
		if (find_char(s1, s2) == 1)
			return ((char *)s1);
		s1++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*s1;
	const char	*s2;

	s1 = "amono pa la playa primo";
	s2 = "segurata de dicoteca";
	printf("%p\n", ft_strpbrk(s1, s2));
	printf("%p", &s1[0]);
}
*/