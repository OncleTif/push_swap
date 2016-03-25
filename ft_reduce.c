/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reduce.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 11:20:04 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/25 11:20:06 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_reduce(t_stck *stck, char *op1, char *op2)
{
	int		mod;
	t_move	*move;
	t_move	**last;

	mod = 0;
	last = &stck->moves;
	move = stck->moves;
	while (move && move->next)
	{
		if ((ft_strequ(move->op, op1) && ft_strequ(move->next->op, op2)) ||
				(ft_strequ(move->op, op2) && ft_strequ(move->next->op, op1)))
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
