/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmilan <gmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:50:59 by gmilan            #+#    #+#             */
/*   Updated: 2021/10/10 13:04:51 by gmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tlst;

	(void)del;
	if (!*lst || !lst || !del)
		return ;
	while (*lst)
	{
		tlst = *lst;
		*lst = (*lst)->next;
		free(tlst);
	}
}
