/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruzafa- <aruzafa-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 21:48:25 by aruzafa-          #+#    #+#             */
/*   Updated: 2022/02/27 23:19:52 by aruzafa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scanner.h"
#include <unistd.h>
#include <stdlib.h>

char	*ft_read_number(int file, char buffer, int *code_error)
{
	int		i;
	char	*res;

	res = malloc(50 * sizeof(char));
	i = 0;
	while (buffer != ':' && i < 50)
	{
		if (buffer != ' ')
		{
			if (buffer < '0' || buffer > '9')
			{
				*code_error = 1;
				free(res);
				return (0);
			}
			res[i++] = buffer;
		}
		read(file, &buffer, 1);
	}
	res[i] = '\0';
	*code_error = 0;
	return (res);
}

char	*ft_read_value(int file, int *code_error)
{
	char	buffer;
	int		i;
	char	*res;
	int		found_space;

	i = 0;
	found_space = 0;
	res = malloc(100 * sizeof(char));
	read(file, &buffer, 1);
	while (buffer == ' ')
		read(file, &buffer, 1);
	while (buffer != '\n' && i < 100)
	{
		while (buffer == ' ')
		{
			read(file, &buffer, 1);
			found_space = 1;
		}
		if (found_space)
		{
			found_space = 0;
			res[i++] = ' ';
		}
		if (buffer < 32 || buffer > 126)
		{
			*code_error = 1;
			free(res);
			return (0);
		}
		res[i++] = buffer;
		read(file, &buffer, 1);
	}
	res[i] = '\0';
	*code_error = 0;
	return (res);
}
