/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanner.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruzafa- <aruzafa-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 21:48:30 by aruzafa-          #+#    #+#             */
/*   Updated: 2022/02/27 23:23:14 by aruzafa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCANNER_H
# define SCANNER_H

/*
 * Reads a file while finds the character given in parameter
 *
 * Returns if the character was present
 */
int		ft_scanner(int file_descriptor, char c);

char	*ft_read_number(int file, char buffer, int *error);

char	*ft_read_value(int file, int *error);

#endif
