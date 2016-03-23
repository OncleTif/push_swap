/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 12:32:50 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/23 12:32:53 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_moves_del(t_move **move)
{
	if (move && *move)
	{
		ft_strdel(&(*move)->op);
		ft_moves_del(&(*move)->next);
		ft_memdel((void**)move);
	}
}
