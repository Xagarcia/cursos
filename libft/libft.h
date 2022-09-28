/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:08:16 by xagarcia          #+#    #+#             */
/*   Updated: 2022/09/28 15:50:20 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>

int		ft_isalnum(int c)
int		ft_isalpha(int c)
int		ft_isascii(int c)
int		ft_isdigit(int c)
int		ft_isprint(int c)
void	*ft_memset(void *b, int c, size_t len)
char	*ft_strchr(const char *str, int c)
int		ft_strlen(char *str)
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
const	char	*ft_strrchr(const char *str, int c)
int		ft_tolower(int c)
int		ft_toupper(int c)
