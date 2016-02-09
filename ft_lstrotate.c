/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 14:13:04 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/09 14:32:24 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

t_list	*ft_lstrotate(t_list *lst)
{
	t_list	*first;

	if (!lst || !lst->next)
		return (lst);
	first = lst->next;
	lst->next = NULL;
	ft_lstpush_back(&first, lst);
	return (first);
}
