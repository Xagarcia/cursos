/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:24:20 by xagarcia          #+#    #+#             */
/*   Updated: 2022/10/13 18:18:41 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	calc_ind2(char const *s1, char const *set)
{
	size_t	ind2;
	size_t	ind_st;

	ind2 = 0;
	ind_st = 0;
	while (ind_st < ft_strlen(set))
	{
		if (s1[ind2] == set[ind_st])
		{
			ind2++;
			ind_st = -1;
		}
		ind_st++;
	}
	return (ind2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ind;
	size_t	ind_st;
	size_t	ind2;
	char	*s3;

	ind = ft_strlen(s1) - 1;
	ind_st = 0;
	if (!*s1)
		return (ft_strdup(""));
	while (ind_st < ft_strlen(set))
	{
		if (s1[ind] == set[ind_st])
		{
			ind--;
			ind_st = -1;
		}
		ind_st++;
	}
	ind2 = calc_ind2(s1, set);
	s3 = ft_substr(s1, ind2, ind - ind2 + 1);
	return (s3);
}
