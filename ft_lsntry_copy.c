/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsntry_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 14:19:55 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/22 17:47:42 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

t_list	*ft_lsntry_copy(t_list *elem)
{
	t_list	*cpy;
	t_ntry	*ntry;

	cpy = NULL;
	if (elem)
	{
		if (!(cpy = ft_lstnew(NULL, 0)))
			ft_error("allocation fail on list copy");
		if (!(ntry = (t_ntry*)ft_memalloc(sizeof(t_ntry))))
			ft_error("allocation fail on ntry copy");
		cpy->content = ntry;
		ft_memcpy(cpy->content, elem->content, sizeof(t_ntry));
		cpy->next = ft_lsntry_copy(elem->next);
	}
	return (cpy);
}
