/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:32:34 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 09:56:42 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;

	c = 'T';
	printf("%d\n", tolower(c));
	printf("%d\n", ft_tol:wower(c));
}
*/