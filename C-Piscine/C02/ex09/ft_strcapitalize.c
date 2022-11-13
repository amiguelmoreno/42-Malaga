/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:43:44 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/21 11:35:59 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	turn_mayus;

	i = 0;
	turn_mayus = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{		
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (turn_mayus == 0)
			{
				str[i] = str[i] - 32;
				turn_mayus = 1;
			}
		}
		else
			turn_mayus = 0;
		if (str[i] >= 48 && str[i] <= 59)
		{
			turn_mayus = 1;
		}	
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	printf("\n");
	printf("%s", ft_strlowcase(str));
	return (0);
}
*/
