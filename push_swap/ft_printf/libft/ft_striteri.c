/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 09:21:47 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 09:57:12 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	idx;

	if (!s || !f)
		return ;
	idx = 0;
	while (idx < (ft_strlen((char *)s)))
	{
		f(idx, &s[idx]);
		idx++;
	}
}
