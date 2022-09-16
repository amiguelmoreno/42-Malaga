/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:27:42 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 09:49:27 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	if (size == SIZE_MAX)
		return (NULL);
	memory = (void *)malloc(size * nmemb);
	if (!memory)
		return (NULL);
	else
		ft_bzero(memory, size * nmemb);
	return (memory);
}
