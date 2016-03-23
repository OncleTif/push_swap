/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_lst_move.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 18:58:42 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/23 19:03:23 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

t_move	*ft_find_lst_move(t_move *moves)
{
	t_move	*move;

	move = moves;
	while (move && move->next)
		move = move->next;
	return (move);
}
