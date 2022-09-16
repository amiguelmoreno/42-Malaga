/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:04:17 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/20 16:12:02 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 48 && str[c] <= 57))
		c++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "454faaf";
	printf("%d",ft_str_is_numeric(str));
	return (0);
}
*/
