/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:19:03 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/20 16:22:45 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 65 && str[c] <= 90))
		c++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "A44fFASAER";
	printf("%d",ft_str_is_uppercase(str));
	return (0);
}
*/
