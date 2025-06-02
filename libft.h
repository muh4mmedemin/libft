/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:53:07 by muayna            #+#    #+#             */
/*   Updated: 2025/06/02 17:52:12 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_atoi(const char *nptr);
void			ft_bzero(void *s, unsigned int n);
void			*ft_calloc(unsigned long nelem, unsigned long elsize);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memchr(const void *s, int c, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, unsigned long n);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
void			*ft_memmove(void *dest, const void *src, unsigned int n);
void			*ft_memset(void *s, int c, unsigned int n);
char			*ft_strchr(char const *s, int c);
char			*ft_strdup(const char *s);
unsigned int	ft_strlcat(char *restrict dst, const char *restrict src,
					unsigned int dstsize);
int				ft_strlcpy(char *dst, const char *src, unsigned int size);
int				ft_strlen(char *s);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strnstr(const char *big, const char *little,
					unsigned long len);
char			*ft_strrchr(char const *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_substr(char const *s, unsigned int start,
					unsigned long len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);

#endif