/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruzafa- <aruzafa-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:17:32 by aruzafa-          #+#    #+#             */
/*   Updated: 2022/02/27 23:22:55 by aruzafa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_str_is_numeric(argv[1]))
		{
			if (ft_dict("numbers.dict", argv[1]) != 0)
				write(1, "Dict Error\n", 11);
		}
		else
			write(1, "Dict Error\n", 11);
	}
	else if (argc == 3)
	{
		if (ft_str_is_numeric(argv[1]))
		{
			if (ft_dict(argv[1], argv[2]) != 0)
				write(1, "Dict Error\n", 11);
		}
		else
			write(1, "Dict Error\n", 11);
	}
	else
		write(1, "Dict Error\n", 11);
}
