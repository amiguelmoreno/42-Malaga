/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:08:05 by antmoren          #+#    #+#             */
/*   Updated: 2022/02/27 22:31:45 by aruzafa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_UTILS_H
# define STRING_UTILS_H

/*
 * Receives two strings.
 * Returns a positive, negative or 0 integer if the difference between s1
 * and s2 character is higher, lower o equal in ASCII position.
 */
int		ft_str_cmp(char *s1, char *s2);

/*
 * Receives a string.
 * Returns a number with the length of the string.
 */
int		ft_str_len(char *c);

/*
 * Prints character or characters given.
 */
void	ft_print(char *c);

/*
 * Receives a string of numbers.
 * Return the string turned into an integer.
 */
int		ft_atoi(char *c);

#endif
