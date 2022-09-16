/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:07:07 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/06 12:51:17 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putpnt(unsigned long number, int sub_cnt)
{
	char	*base;

	base = "0123456789abcdef";
	if (number >= 16)
	{
		sub_cnt = ft_putpnt(number / 16, sub_cnt);
		sub_cnt = ft_putpnt(number % 16, sub_cnt);
	}
	else
	{
		ft_putchar(base[number]);
		sub_cnt++;
	}
	return (sub_cnt);
}

int	ft_treat_pointer(unsigned long number, int sub_cnt)
{
	ft_putstr("0x");
	sub_cnt += 2;
	sub_cnt = ft_putpnt(number, sub_cnt);
	return (sub_cnt);
}
