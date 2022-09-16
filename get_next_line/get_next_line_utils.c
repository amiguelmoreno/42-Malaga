/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:40:36 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/30 12:02:46 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s1ands2;
	int		length;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	length = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	s1ands2 = malloc(sizeof(char) * (length + 1));
	if (!s1ands2)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s1ands2[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s1ands2[i + j] = s2[j];
		j++;
	}
	s1ands2[i + j] = '\0';
	return (s1ands2);
}

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)str);
	return (0);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

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

size_t	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}
