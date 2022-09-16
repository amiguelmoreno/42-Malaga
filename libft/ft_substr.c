/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:27:47 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/16 09:06:21 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*smodi;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	else if (ft_strlen(s) < len)
		len = ft_strlen(s);
	smodi = (char *)malloc(sizeof(*s) * (len + 1));
	if (!smodi)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] && start < ft_strlen((char *)s))
	{
		smodi[i] = s[start + i];
		i++;
	}
	smodi[i] = '\0';
	return (smodi);
}
