/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:25:50 by agumina           #+#    #+#             */
/*   Updated: 2023/02/01 14:07:02 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_el;

	if (lst == NULL)
		return (NULL);
	new_list = 0;
	while (lst != NULL)
	{
		new_el = ft_lstnew(f(lst->content));
		if (new_el == NULL)
		{
			ft_lstclear(&new_el, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_el);
		lst = lst->next;
	}
	return (new_list);
}
