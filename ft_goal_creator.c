/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_goal_creator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 11:24:30 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/10 11:52:21 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_goal_creator(t_stck *stck)
{
	int		init;
	t_list	*elem;


	init = 0;
	elem = stck->a;
	if (!(stck->goal = (t_ntry*)ft_memalloc(sizeof(t_ntry) * stck->a_size)))
		ft_error("allocation fail on goal");
	while (init < stck->a_size)
	{
		stck->goal[init].init = init;
		stck->goal[init].value = *(int*)elem->content;
		elem = elem->next;
		init++;
	}
}
