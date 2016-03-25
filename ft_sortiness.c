/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortiness.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 11:22:21 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/25 11:22:23 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_sortiness(t_stck *stck)
{
	t_list	*elem;
	int		first;

	elem = stck->a;
	first = 1;
	while (elem)
	{
		if (((t_ntry*)elem->content)->goal != ((t_ntry*)elem->content)->init)
		{
			stck->end = ((t_ntry*)elem->content)->init;
			if (first)
				stck->bgin = ((t_ntry*)elem->content)->init;
			first = 0;
		}
		elem = elem->next;
	}
	return (stck->end - stck->bgin);
}
