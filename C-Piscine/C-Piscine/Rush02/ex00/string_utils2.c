/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:10:52 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/27 22:49:03 by aruzafa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_utils2.h"
#include "string_utils.h"
#include <stdlib.h>

char	*ft_truncate_str(char *c, int pos)
{
	int		len;
	int		i;
	char	*cpy;

	len = ft_str_len(c);
	cpy = malloc((len - pos) * sizeof(char));
	i = 0;
	while (i < len - pos)
	{
		cpy[i] = c[i + pos];
		i++;
	}
	i = 1;
	while (i < len - pos)
	{
		cpy[i++] = '0';
	}
	return (cpy);
}

char	*ft_substr(char *s, int a, int b)
{
	int		i;
	char	*res;

	res = malloc((b - a + 2) * sizeof(char));
	i = a;
	while (i <= b)
	{
		res[i - a] = s[i];
		i++;
	}
	res[i - a] = '\0';
	return (res);
}

char	*ft_give_more_zeros(int c)
{
	char	*res;
	int		i;

	res = malloc((c + 1) * sizeof(char));
	i = 1;
	while (i < c)
	{
		res[i++] = '0';
	}
	res[c] = 0;
	res[0] = '1';
	return (res);
}
