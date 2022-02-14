/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmilan <gmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:59:22 by gmilan            #+#    #+#             */
/*   Updated: 2021/10/10 20:38:29 by gmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tlst;
	t_list	*flst;

	tlst = NULL;
	(void)f;
	while (lst)
	{
		flst = ft_lstnew(lst->content);
		if (!flst)
		{
			ft_lstclear(&tlst, del);
			return (NULL);
		}
		ft_lstadd_back(&tlst, flst);
		lst = lst->next;
	}
	return (tlst);
}
