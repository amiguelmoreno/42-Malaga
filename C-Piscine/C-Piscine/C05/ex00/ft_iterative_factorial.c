/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:51:37 by antmoren          #+#    #+#             */
/*   Updated: 2022/03/02 22:27:21 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = nb;
	res = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i--;
	while (i > 0)
	{
		res = res * i;
		i--;
	}
	return (res);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d", ft_iterative_factorial(0));
}
*/
