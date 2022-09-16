/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:10:15 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 09:56:27 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;

	dst = malloc(ft_strlen(src) + 1);
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, src, ft_strlen(src) + 1);
	return (dst);
}
