/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:17:39 by antmoren          #+#    #+#             */
/*   Updated: 2022/03/01 11:08:34 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power >= 0)
	{
		while (power > 0)
		{
			res = res * nb;
			power--;
		}
		return (res);
	}
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(0, -1));
}
*/
