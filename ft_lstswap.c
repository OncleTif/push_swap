/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 13:52:25 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/11 12:28:35 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

t_list	*ft_lstswap(t_list *lst)
{
	t_list	*next;

	if (!lst || !lst->next)
		return (lst);
	next = lst->next;
	lst->next = next->next;
	next->next = lst;
	return (next);
}
