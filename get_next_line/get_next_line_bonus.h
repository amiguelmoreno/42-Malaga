/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:40:39 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/27 14:00:14 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

/* get_next_line.c */
char	*get_next_line(int fd);

/* get_next_line_utils.c */
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

size_t	ft_strlen(const char *str);

#endif