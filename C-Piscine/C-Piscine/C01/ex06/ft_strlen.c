/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:04:55 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/18 10:21:29 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char a[] = "Hello World";
	printf("el número de caracteres es %d", ft_strlen(&a[0]));
}
*/
