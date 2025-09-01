/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nado-nas <nado-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:47:15 by nado-nas          #+#    #+#             */
/*   Updated: 2025/09/01 12:36:01 by nado-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
/*───────────────────────────────────────────
				Libc function
─────────────────────────────────────────────*/

// string.h
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n); // strings.h
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// stdlib.h
int		ft_atoi(const char *nptr);

void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s); // string.h
// ctype.h
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

/*───────────────────────────────────────────
			Additional function
─────────────────────────────────────────────*/

/*───────────────────────────────────────────
				Personal picks
─────────────────────────────────────────────*/
int		ft_isspace(int c);
int		ft_islower(int c);
int		ft_isupper(int c);

#endif