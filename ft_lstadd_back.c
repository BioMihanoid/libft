/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmilan <gmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:35:48 by gmilan            #+#    #+#             */
/*   Updated: 2021/10/10 11:39:31 by gmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t_elm;

	t_elm = *lst;
	if (lst)
	{
		if (*lst)
		{
			while (t_elm->next)
				t_elm = t_elm->next;
			t_elm->next = new;
		}
		else
			*lst = new;
	}
}
