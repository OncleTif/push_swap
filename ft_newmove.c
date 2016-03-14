/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 16:23:34 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/14 16:42:39 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

t_move	*ft_newmove(t_move *nxt, t_stck *stck)
{
	t_move	*move;

		if (!(move = (t_move*)ft_memalloc(sizeof(t_move))))
			ft_error("move allocation error");
	move->next = nxt;
	move->stck = stck;
	return (move);
}
