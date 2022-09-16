/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:07:14 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/03 11:18:08 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_treat_string(va_list ptr, int sub_cnt)
{
	char	*x;
	int		i;

	x = va_arg(ptr, char *);
	i = 0;
	if (x == NULL)
	{
		write(1, "(null)", 6);
		return (sub_cnt += 6);
	}
	while (x[i])
	{
		ft_putchar(x[i]);
		sub_cnt++;
		i++;
	}
	return (sub_cnt);
}
