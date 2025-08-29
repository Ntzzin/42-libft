/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nado-nas <nado-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:47:15 by nado-nas          #+#    #+#             */
/*   Updated: 2025/08/28 18:08:11 by nado-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void	*memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memccpy(void *dest, const void *src, int c, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
void	*memchr(const void *s, int c, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);

size_t	strlen(const char *s);
size_t	strlcpy(char *dst, const char *src, size_t size);
size_t	strlcat(char *dst, const char *src, size_t size);

char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
char	*strnstr(const char *big, const char *little, size_t len);
int		strncmp(const char *s1, const char *s2, size_t n);

int		atoi(const char *nptr);

void	*calloc(size_t nmemb, size_t size);
char	*strdup(const char *s);

int		isalpha(int c);
int		isdigit(int c);
int		isalnum(int c);
int		isascii(int c);
int		isprint(int c);
int		toupper(int c);
int		tolower(int c);

#endif