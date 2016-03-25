/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ntry_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 12:59:31 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/25 13:05:11 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_ntry_init(t_stck *stck, int argc, char **argv)
{
	int		init;
	t_list	*elem;

	while (stck->a_size + 1 < argc)
	{
		ft_lstpush_back(&stck->a, ft_atolst(argv[stck->a_size + 1]));
		stck->a_size++;
	}
	init = 0;
	elem = stck->a;
	stck->size = stck->a_size;
	while (init < stck->a_size)
	{
		((t_ntry*)elem->content)->init = init;
		elem = elem->next;
		init++;
	}
	ft_bubble_solve(stck);
	stck->init = ft_lsntry_copy(stck->a);
}
