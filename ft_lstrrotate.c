/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrrotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 11:38:08 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/11 11:44:40 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

t_list	*ft_lstrrotate(t_list *lst)
{
	t_list	*last;
	t_list	*new_last;

	if (!lst || !lst->next)
		return (lst);
	last = lst;
	while (last->next)
	{
		new_last = last;
		last = last->next;
	}
	new_last->next = NULL;
	ft_lstadd(&lst, last);
	return (last);
}
