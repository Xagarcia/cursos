/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:57:35 by xagarcia          #+#    #+#             */
/*   Updated: 2022/09/28 15:01:36 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const	char	*ft_strrchr(const char *str, int c)
{
	int	strlen;

	strlen = ft_strlen(str);
	while (strlen >= 0)
	{
		if (str[strlen] == c)
		{
			return ((char *) &str[strlen]);
		}
		strlen--;
	}
	return (NULL);
}
