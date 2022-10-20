/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:31:07 by xagarcia          #+#    #+#             */
/*   Updated: 2022/10/11 17:55:55 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	j = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && j < dstsize - dstlen - 1)
	{
		dst[i + j] = src[j];
		j++;
	}	
	dst[i + j] = '\0';
	return (dstlen + srclen);
}
