/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 16:23:34 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 17:37:25 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_newmove(t_stck *stck, char *str)
{
	t_move	*move;

	if (!(move = (t_move*)ft_memalloc(sizeof(t_move))))
		ft_error("move allocation error");
	if (stck->lst_move)
		stck->lst_move->next = move;
	else
		stck->moves = move;
	stck->lst_move = move;
	move->op = ft_strdup(str);
}
