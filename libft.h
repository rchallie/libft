/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:03:52 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/10 18:55:51 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_isalnum(int c);
int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_atoi(const char *str);
int			ft_putchar(int c);
void		ft_putstr(const char *str);
void		ft_putnbr(int nbr);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlen(const char *s);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strchr(const char *s, int c);
size_t		ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *s1, const char *s2, size_t dstsize);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void	*dst, const void *src, size_t n);
char		*ft_strdup(const char *s);
char		*ft_strcpy(char * dst, const char * src);
char		*ft_strnew(size_t size);
char		*ft_strncpy(char * dst, const char * src, size_t len);
#endif

