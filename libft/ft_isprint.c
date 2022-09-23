/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:18:25 by xagarcia          #+#    #+#             */
/*   Updated: 2022/09/16 11:22:22 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(in c)
{
	if(c >= 32 && c <= 126)
		return (1);
	return (0);
}