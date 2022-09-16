/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:12:44 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/15 09:36:28 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	print_numbers(int n1, int n2)
{
	ft_putchar(n1 / 10 + '0');
	ft_putchar(n1 % 10 + '0');
	ft_putchar(' ');
	ft_putchar(n2 / 10 + '0');
	ft_putchar(n2 % 10 + '0');
	if (n1 != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			print_numbers(n1, n2);
		n2++;
		}
	n1++;
	}
}
