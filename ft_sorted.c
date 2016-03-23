/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 16:16:53 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/23 17:52:57 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_sorted(t_list *list)
{
	t_list	*elem;
	int		sorted;
	int		range;

	sorted = 1;
	range = 0;
	elem = list;
	while (sorted && elem)
	{
		if (((t_ntry*)elem->content)->goal != range)
			sorted = 0;
		elem = elem->next;
		range++;
	}
	return (sorted);
}
