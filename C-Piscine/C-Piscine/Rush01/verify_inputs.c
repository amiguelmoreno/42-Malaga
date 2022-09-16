/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_inputs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:28:13 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/20 13:28:47 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <library.h>

int verify_inputs(int argv, char *argc)
{
	int i;

	i = 0;
	if(argv != 2 || argc == '\0')
	{
		ft_putstr("Error");
		return (0);
	}
	while (argc[i])
	{
		if(argc[i] < '1' || argc[i] > '4' || argc[i] != ' ')
		{
			ft_putstr("Error");
			return (0);
		}
		else if((i % 2 != 0) && argc[i] != ' ')
		{
			ft_putstr("Error");
			return (0);
		}
		i++;
	}
	if(i != 31)
	{
		ft_putstr("Error");
		return (0);
	}
}
