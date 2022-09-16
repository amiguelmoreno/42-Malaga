/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 08:36:31 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/20 15:49:09 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 65 && str[c] <= 90) || (str[c] >= 97 && str[c] <= 122))
		c++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "!rafdas.ifd][sfa";

	printf("%d",ft_str_is_alpha(str));
	return (0);
}
*/
