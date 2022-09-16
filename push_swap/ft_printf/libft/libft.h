/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:08:33 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/06 09:57:20 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

//  Parte 1
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
size_t				ft_strlen(const char *str);
//Mide la lonigtud de un string
int					ft_strncmp(const char *s1, const char *s2, size_t n);
//https://www.tutorialspoint.com/c_standard_library/c_function_strncmp.htm
size_t				ft_strlcat(char *dest, const char *src, size_t size);
//https://c-for-dummies.com/blog/?p=3896
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
//https://c-for-dummies.com/blog/?p=3873
char				*ft_strchr(const char *str, int c);
//https://www.tutorialspoint.com/c_standard_library/c_function_strchr.htm
char				*ft_strrchr(const char *str, int c);
//https://www.tutorialspoint.com/c_standard_library/c_function_strrchr.htm
int					ft_toupper(int c);
// Pasa un caracter a mayuscula
int					ft_tolower(int c);
// Pasa un caracter a minuscula
int					ft_atoi(const char *str);
// https://www.tutorialspoint.com/c_standard_library/c_function_atoi.htm
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
//https://www.freebsd.org/cgi/man.cgi?query=strnstr&sektion=3
void				ft_bzero(void *s, size_t n);
//https://man7.org/linux/man-pages/man3/bzero.3.html
void				*ft_memset(void *str, int c, size_t n);
// https://www.tutorialspoint.com/c_standard_library/c_function_memset.htm
void				*ft_memcpy(void *dest, const void *src, size_t n);
// https://www.tutorialspoint.com/c_standard_library/c_function_memcpy.htm
void				*ft_memmove(void *str1, const void *str2, size_t n);
// https://www.tutorialspoint.com/c_standard_library/c_function_memmove.htm
void				*ft_memchr(const void *s, int c, size_t n);
//https://www.tutorialspoint.com/c_standard_library/c_function_memchr.htm
int					ft_memcmp(const void *s1, const void *s2, size_t n);
// https://www.tutorialspoint.com/c_standard_library/c_function_memcmp.htm
void				*ft_calloc(size_t count, size_t size);
// https://www.tutorialspoint.com/c_standard_library/c_function_calloc.htm
char				*ft_strdup(const char *src);
//https://stackoverflow.com/questions/252782/strdup-what-does-it-do-in-c

// Parte 2
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

//  Bonus
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

#endif
