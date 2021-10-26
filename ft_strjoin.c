/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmilan <gmilan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:00:41 by gmilan            #+#    #+#             */
/*   Updated: 2021/10/09 15:47:56 by gmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return ((void *)0);
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	s = (char *)malloc(i + j + 1);
	if (s)
	{
		s[i + j] = '\0';
		while (--j + 1)
			s[i + j] = s2[j];
		while (--i + 1)
			s[i] = s1[i];
	}
	else
		return ((void *)0);
	return (s);
}
