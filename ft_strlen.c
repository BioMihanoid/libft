/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmilan <gmilan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:00:41 by gmilan            #+#    #+#             */
/*   Updated: 2021/10/09 15:47:56 by gmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *s)
{
	int	length;
	int	i;

	i = 0;
	length = 0;
	while (s[i++])
		length++;
	return (length);
}
