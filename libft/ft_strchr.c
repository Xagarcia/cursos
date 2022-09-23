/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:40:42 by xagarcia          #+#    #+#             */
/*   Updated: 2022/09/23 12:53:16 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr( const char *str, int c)
{
	int	i;

	while (((char*)str)[i] != '\0')
	{
		if (((char*)str)[i] == c)
		{
			return 
				((char*)&str[i]);
		}
		i++;
	}
	if (c == '\0')
		return ((char*)%str[i]);
	return (NULL);
}
