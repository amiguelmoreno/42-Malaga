/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:13:46 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/20 16:17:43 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 97 && str[c] <= 122))
		c++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "abcdefghijklmn443opqrs";
	printf("%d",ft_str_is_lowercase(str));
	return (0);
}
*/
