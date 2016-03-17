/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ntry_creator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 12:21:25 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/17 11:58:44 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_ntry_creator(t_stck *stck)
{
	int		init;
	t_list	*elem;

	init = 0;
	elem = stck->a;
	if (!(stck->ntry = (t_ntry*)ft_memalloc(sizeof(t_ntry) * stck->a_size)))
		ft_error("allocation fail on ntry");
	while (init < stck->a_size)
	{
		stck->ntry[init].init = init;
		stck->ntry[init].value = ((t_ntry*)elem->content)->value;
		elem = elem->next;
		init++;
	}
	ft_bubble_solve(stck);
}
