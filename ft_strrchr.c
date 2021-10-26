/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmilan <gmilan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:00:41 by gmilan            #+#    #+#             */
/*   Updated: 2021/10/09 15:47:56 by gmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*ptr;
	unsigned char	*str;
	size_t			i;

	i = 0;
	ptr = (void *)0;
	str = (unsigned char *)s;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			ptr = str + i;
		i++;
	}
	if (!(unsigned char)c)
		return ((char *)str + i);
	return ((char *)ptr);
}
