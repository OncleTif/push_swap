/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 11:47:39 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 17:44:53 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	rrs(t_stck *stck)
{
	stck->a = ft_lstrrotate(stck->a);
	stck->b = ft_lstrrotate(stck->b);
	stck->moves = ft_newmove(stck->moves, "rrs");
}
