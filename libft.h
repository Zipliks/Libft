/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsewer <jsewer@student.21-scool.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 09:56:53 by jsewer            #+#    #+#             */
/*   Updated: 2021/10/18 01:28:13 by jsewer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define FT_INT_MIN -2147483647
# define FT_INT_MAX 2147483647

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strcpy(char *dest, const char *src);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *source, size_t length);
int		ft_atoi(const char *nptr);
int		ft_isspace(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dest, const char *source, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif