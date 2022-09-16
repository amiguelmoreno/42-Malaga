/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:58:49 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 09:57:03 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[];

	str[] = "Hello worl5rfrw54d";
	printf("%d\n", ft_strlen(str));
	printf("%lu\n", strlen(str));
}
*/