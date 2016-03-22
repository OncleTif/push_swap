/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 13:00:42 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/22 13:03:34 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_count_moves(t_stck *stck)
{
	int		nbr;
	t_move	*move;

	move = stck->moves;
	nbr = 0;
	while (move)
	{
		move = move->next;
		nbr++;
	}
	return (nbr);
}
