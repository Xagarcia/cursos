/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:29:34 by xagarcia          #+#    #+#             */
/*   Updated: 2022/10/13 14:55:43 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*p_dst;
	unsigned const char		*p_src;

	if (dst < src)
		return (ft_memcpy(dst, src, len));
	p_dst = (unsigned char *) dst;
	p_src = (unsigned const char *) src;
	if (!len || dst == src)
		return (dst);
	while (len--)
		p_dst[len] = p_src[len];
	return (dst);
}
