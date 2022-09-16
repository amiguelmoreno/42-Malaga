/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:39:09 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 09:55:53 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		idx;
	int		size;
	char	tmp;

	size = ft_strlen(str);
	idx = 0;
	while (idx < (size / 2))
	{
		tmp = str[idx];
		str[idx] = str[size - idx - 1];
		str[size - idx - 1] = tmp;
		idx++;
	}
	return (str);
}

int	ft_intlen(int n)
{
	int			idx;
	long long	tmp;

	tmp = n;
	idx = 1;
	if (tmp < 0)
	{
		tmp = tmp * -1;
		idx++;
	}
	while (tmp >= 10)
	{
		tmp = tmp / 10;
		idx++;
	}
	return (idx);
}

char	*sub_itoa(int n, char *value)
{
	int				is_negative;
	unsigned int	positive_n;
	int				i;

	i = 0;
	if (n < 0)
		is_negative = 1;
	else
		is_negative = 0;
	if (n < 0)
		positive_n = -n;
	else
		positive_n = n;
	while (positive_n != 0)
	{
		value[i++] = (positive_n % 10) + '0';
		positive_n = positive_n / 10;
	}
	if (is_negative)
		value[i++] = '-';
	return (ft_strrev(value));
}

char	*ft_itoa(int n)
{
	char	*value;

	if (n == 0)
		return (ft_strdup("0"));
	value = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (!value)
		return (NULL);
	ft_memset(value, '\0', (ft_intlen(n) + 1));
	sub_itoa(n, value);
	return (value);
}
