/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:38:18 by jsewer            #+#    #+#             */
/*   Updated: 2021/11/13 19:38:21 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/*
** Part 1 - Libc functions
*/

int				ft_isascii(int chr);
int				ft_isprint(int chr);
int				ft_isalpha(int chr);
int				ft_isdigit(int chr);
int				ft_isalnum(int chr);

int				ft_tolower(int chr);
int				ft_toupper(int chr);
size_t			ft_strlen(const char *str);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);

char			*ft_strchr(const char *str, int chr);
char			*ft_strrchr(const char *str, int chr);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_strncmp(const char *str1, const char *str2, size_t num);
int				ft_atoi(const char *str);

void			*ft_memset(void *b, int chr, size_t len);
void			ft_bzero(void *s, size_t num);
void			*ft_memcpy(void *dst, const void *src, size_t num);
void			*ft_memccpy(void *dst, const void *src, int chr, size_t num);
void			*ft_memmove(void *dst, const void *src, size_t len);

void			*ft_memchr(const void *s, int chr, size_t num);
int				ft_memcmp(const void *s1, const void *s2, size_t num);
char			*ft_strdup(const char *str1);
void			*ft_calloc(size_t count, size_t size);

/*
** Part 2 - Additional functions
*/

char			*ft_itoa(int num);
void			ft_putchar_fd(char chr, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int num, int fd);

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char chr);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));

/*
** Bonus part
*/

t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
int				ft_lstsize(t_list *lst);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);

void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

/*
** Personal functions
*/

int				ft_islower(int chr);
int				ft_isupper(int chr);
int				ft_isspace(int chr);

void			ft_putchar(char chr);
void			ft_putstr(char *str);
void			ft_putendl(char *str);
void			ft_putnbr(int num);

char			*ft_strcpy(char *dst, const char *src);

#endif
