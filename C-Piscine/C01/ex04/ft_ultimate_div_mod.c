/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:52:50 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/18 10:11:50 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	r;

	d = *a / *b;
	r = *a % *b;
	*a = d;
	*b = r;
}
/*
int main	(void)
{
	int x;
	int y;

	x = 7;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf("la división es %d y el resto %d", x, y);
	return (0);
}
*/
