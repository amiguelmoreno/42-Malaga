/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:29:04 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/21 18:05:21 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 32 && str[c] <= 126))
		c++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "A44fFASAER";
	printf("%d",ft_str_is_printable(str));
	return (0);
}
*/
