/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:59:40 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 09:56:19 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Funcion para contar el número de palabras que van a resultar
size_t	word_counter(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			cnt++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (cnt);
}

char	**free_all(char **s, size_t idx)
{
	while (s[idx] != NULL && idx >= 0)
	{
		free(s[idx]);
		s[idx] = NULL;
		idx--;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char	**sub_split(char const *s, char c, char **words)
{
	size_t	word_num;
	size_t	i;
	size_t	len;

	i = 0;
	word_num = word_counter(s, c);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = 0;
			while (*(s + len) && *(s + len) != c)
				len++;
			words[i++] = ft_substr(s, 0, len);
			if (i - 1 < word_num && !words[i - 1])
				return (free_all(words, i));
			s += len;
		}
	}
	words[i] = 0;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!words)
		return (NULL);
	sub_split(s, c, words);
	return (words);
}
/*
#include <stdio.h>

int	main(void)
{
    char **arr;
	const char	*str1;
	char		c;

    str1 = "almendra.queso.jamon.cebolla" ;
    c = '.';
    arr = ft_split(str1, c);
    printf("%s", arr[1]);
}
*/
