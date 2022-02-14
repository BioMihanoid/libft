/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmilan <gmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:08:41 by gmilan            #+#    #+#             */
/*   Updated: 2021/10/10 18:39:44 by gmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new_item;

	new_item = malloc(sizeof(t_list));
	if (!new_item)
		return (NULL);
	new_item->content = content;
	new_item->next = NULL;
	return (new_item);
}
