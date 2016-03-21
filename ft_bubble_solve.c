/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_solve.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 10:42:36 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 10:54:28 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_bubble_solve(t_stck *stck)
{
	t_list	*elem;
	t_list	*ref;

	elem = stck->a;
	while (elem)
	{
		ref = stck->a;
		while (ref)
		{
			if (((t_ntry*)elem->content)->value <
					((t_ntry*)ref->content)->value)
				((t_ntry*)elem->content)->goal++;
			if (((t_ntry*)elem->content)->value ==
					((t_ntry*)ref->content)->value && elem != ref)
				ft_error("Error: the list contains a number twice");
			ref = ref->next;
		}
		elem = elem->next;
	}
}
