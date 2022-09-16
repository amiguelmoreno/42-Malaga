/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:45:37 by antmoren          #+#    #+#             */
/*   Updated: 2022/03/02 18:29:29 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 2)
		return (1);
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else
		return (-1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_fibonacci(6));
}
*/
