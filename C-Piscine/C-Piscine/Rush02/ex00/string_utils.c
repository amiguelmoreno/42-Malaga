/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:06:53 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/27 22:31:32 by aruzafa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_utils.h"
#include <unistd.h>

int	ft_str_cmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print(char *c)
{
	while (*c)
		write(1, c++, 1);
}

int	ft_atoi(char *c)
{
	int	res;

	res = 0;
	while (*c)
	{
		res *= 10;
		res += *c - '0';
		c++;
	}
	return (res);
}

int	ft_str_len(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}
