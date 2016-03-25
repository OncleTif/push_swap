/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_offset.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 11:22:05 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/25 11:22:08 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_sorted_offset(t_stck *stck)
{
	t_list	*elem;
	int		sorted;
	int		offset;
	int		range;

	sorted = 1;
	range = 0;
	elem = stck->a;
	offset = ft_offset(stck, ((t_ntry*)elem->content)->goal, range);
	while (sorted && elem)
	{
		if (offset != ft_offset(stck, ((t_ntry*)elem->content)->goal, range))
			sorted = 0;
		elem = elem->next;
		range++;
	}
	return (sorted);
}
