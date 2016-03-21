/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:10:15 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 11:02:47 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

t_list	*ft_atolst(char *str)
{
	t_list	*elem;
	t_ntry	*ntry;

	if (!str)
		return (NULL);
	if (!(elem = ft_lstnew(NULL, 0)))
		ft_error("allocation fail on list");
	if (!(ntry = (t_ntry*)ft_memalloc(sizeof(t_ntry))))
		ft_error("allocation fail on ntry");
	ntry->value = ft_atoi_strict(str);
	elem->content = ntry;
	elem->content_size = sizeof(t_ntry*);
	return (elem);
}
