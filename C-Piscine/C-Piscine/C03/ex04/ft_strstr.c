/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:32:46 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/24 10:50:06 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	m;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		m = 0;
		while (to_find[m] != '\0' && str[i + m] == to_find[m])
			m++;
		if (to_find[m] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char str[] = "Hola mu mundo h";
char find[] = "HHH";

printf("Mi resultado: %s\n", ft_strstr(str, find));
printf("El resultado correcto: %s", strstr(str, find));
}
*/
