/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:30:44 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/28 18:18:29 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr('-');
		ft_putstr('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putstr('-');
		ft_putnbr(nb * (-1));
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb = nb + '0';
		write(1, &nb, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/
