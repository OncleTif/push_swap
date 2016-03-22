/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_pb_reduce.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 10:52:14 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/22 11:37:00 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_pa_pb_reduce(t_stck *stck)
{
	int		mod;
	t_move	*move;
	t_move	**last;

	mod = 0;
	last = &stck->moves;
	move = stck->moves;
	while (move && move->next)
	{
		if ((ft_strequ(move->op, "pa") && ft_strequ(move->next->op, "pb")) ||
				(ft_strequ(move->op, "pb") && ft_strequ(move->next->op, "pa")))
		{
			*last = move->next->next;
			ft_freemove(move->next);
			ft_freemove(move);
			mod++;
		}
		else
			last = &move->next;
		move = *last;
	}
	return (mod);
}
