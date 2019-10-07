/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:03:52 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/07 16:55:35 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
#define _LIBFT_H_

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
int  ft_tolower(int c);
int  ft_toupper(int c);
int  ft_isprint(int c);
int  ft_isascii(int c);
int  ft_isalnum(int c);
int  ft_isdigit(int c);
int  ft_isalpha(int c);
int  ft_atoi(const char *str);
int  ft_putchar(int c);
void ft_putstr(const char *str);
void ft_putnbr(int nbr);

#endif

