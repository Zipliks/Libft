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

# define FT_INT_MIN -2147483648
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
void	*ft_memset(void *b, int c, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strcpy(char *dest, const char *src);

#endif